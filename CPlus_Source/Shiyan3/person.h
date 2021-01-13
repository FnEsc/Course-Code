#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char m_strName[20];
	int m_nAge;
	int m_nSex;
public:
	Person();//构造函数
	Person(const char *name, int age, char sex); //构造函数
	Person(const Person &p); //拷贝构造函数
	~Person()  				//析构函数
	{
		cout << "Now destroying the instance of Person" << endl;
	}
	void SetName(char *name);
	void SetAge(int age);
	void setSex(char sex);
	char* GetName();
	int GetAge();
	char GetSex();
	void ShowMe();
};
