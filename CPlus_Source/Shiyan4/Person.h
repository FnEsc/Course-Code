#pragma once
class Person
{
public:
	Person();
	~Person();
	virtual void calculation()=0;
	virtual void display()=0;

protected:
	int id;
	char name[15];
	float salary=0;
};

Person::Person()
{
}

Person::~Person()
{
}

