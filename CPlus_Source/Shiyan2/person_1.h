#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Person_1{
private:
	char m_strName[20];
	int m_nAge;
	int m_nSex;
public:
	Person_1();//���캯��
	Person_1(const char *name, int age, char sex); // ���캯��
	Person_1(const Person_1 &p); // �������캯��
	~Person_1()  				// ��������
	{
		cout << "Now destroying the instance of Person_1" << endl;
	}
	void SetName(const char *name);
	void SetAge(int age);
	void setSex(char sex);
	const char* GetName() const;
	int GetAge() const;
	char GetSex() const;
	void ShowMe() const;
};

int main_person_1();
