#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Person_2
{
private:
	char m_strName[20];
	int m_nAge;
	int m_nSex;
public:
	Person_2();//���캯��
	Person_2(const char *name, int age, char sex); //���캯��
	Person_2(const Person_2 &p); //�������캯��
	~Person_2()  				//��������
	{
		cout << "Now destroying the instance of Person_2" << endl;
	}
	void SetName(const char *name);
	void SetAge(int age);
	void setSex(char sex);
	char* GetName();
	int GetAge();
	char GetSex();
	void ShowPerson_2();
};

int main_person_2();