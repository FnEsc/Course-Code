#pragma once
#include<iostream>
using namespace std;
class SINGLE_INSTANCE
{
public:
	SINGLE_INSTANCE();
	~SINGLE_INSTANCE();
private:
	static int instance_count;
};

SINGLE_INSTANCE::SINGLE_INSTANCE()
{
	instance_count += 1;
	if (instance_count > 1)cout << "Warning: more than one object instance!" << endl;
	return;
}

SINGLE_INSTANCE::~SINGLE_INSTANCE()
{
	instance_count -= 1;
	return;
}


int SINGLE_INSTANCE::instance_count = 0;//初始化静态数据成员变量


void main_single() {
	//创建第一个对象
	cout << "I HAVE THE FIRST OBJECT." << endl;
	SINGLE_INSTANCE obj1;
	//创建第二个对象
	cout << "I HAVE THE SECOND OBJECT." << endl;
	SINGLE_INSTANCE obj2;
	return;
}