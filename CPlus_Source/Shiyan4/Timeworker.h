#pragma once
#include"Person.h"
#include<iostream>
class Timeworker:public Person
{
public:
	Timeworker(int id0, const char* name0, float time0);	//创建Employee时候要给id、名字、time
	~Timeworker();
	virtual void calculation();
	virtual void display();
private:
	float time;
};

Timeworker::Timeworker(int id0, const char* name0, float time0)
{
	id = id0;
	strcpy_s(name, name0);
	time = time0;
}

Timeworker::~Timeworker()
{
}

void Timeworker::calculation() {
	salary = 4000 + time * 100;
}

void Timeworker::display() {
	std::cout << "这个id为" << id << "名字为" << name << "的工资是：" << salary << std::endl;
}