#pragma once
#include"Person.h"
#include<iostream>
class Employee:public Person
{
public:
	Employee(int id0, const char* name0);  //����Employeeʱ��Ҫ��id������
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
	std::cout << "���idΪ" << id << "����Ϊ" << name << "�Ĺ����ǣ�" << salary << std::endl;
}