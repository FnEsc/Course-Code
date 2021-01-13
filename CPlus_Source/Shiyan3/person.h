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
	Person();//���캯��
	Person(const char *name, int age, char sex); //���캯��
	Person(const Person &p); //�������캯��
	~Person()  				//��������
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
