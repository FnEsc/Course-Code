#pragma once
#include"Person.h"
#include<iostream>
class Salesman:public Person
{
public:
	Salesman(int id0, const char* name0, float sales0);		//����Employeeʱ��Ҫ��id�����֡����۶�
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
	std::cout << "���idΪ" << id << "����Ϊ" << name << "�Ĺ����ǣ�" << salary << std::endl;
}




