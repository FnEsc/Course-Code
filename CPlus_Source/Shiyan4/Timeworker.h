#pragma once
#include"Person.h"
#include<iostream>
class Timeworker:public Person
{
public:
	Timeworker(int id0, const char* name0, float time0);	//����Employeeʱ��Ҫ��id�����֡�time
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
	std::cout << "���idΪ" << id << "����Ϊ" << name << "�Ĺ����ǣ�" << salary << std::endl;
}