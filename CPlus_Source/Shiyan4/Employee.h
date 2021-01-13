#pragma once
#include"Person.h"
#include<iostream>
class Employee:public Person
{
public:
	Employee(int id0, const char* name0);  //创建Employee时候要给id和名字
	~Employee();
	virtual void calculation();
	virtual void display();
private:
};

Employee::Employee(int id0, const char* name0) {
	id = id0;
	strcpy_s(name, name0);
}

Employee::~Employee()
{
}

void Employee::calculation() {
	salary = 10000;
}

void Employee::display() {
	std::cout << "这个id为" << id << "名字为" << name << "的工资是：" << salary << std::endl;
}