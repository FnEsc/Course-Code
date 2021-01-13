#pragma once
#include"Person.h"
#include<iostream>
class Salesman:public Person
{
public:
	Salesman(int id0, const char* name0, float sales0);		//创建Employee时候要给id、名字、销售额
	~Salesman();
	virtual void calculation();
	virtual void display();
private:
	float sales;
};

Salesman::Salesman(int id0, const char* name0, float sales0)
{
	id = id0;
	strcpy_s(name, name0);
	sales = sales0;
}

Salesman::~Salesman()
{
}

void Salesman::calculation() {
	salary = 4000 + sales * 0.04f;
}

void Salesman::display() {
	std::cout << "这个id为" << id << "名字为" << name << "的工资是：" << salary << std::endl;
}




