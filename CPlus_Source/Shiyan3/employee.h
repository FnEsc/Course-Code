#pragma once
#include "person.h"
class Employee : public Person 		//��Ա�ඨ��
{
	char m_strDept[20];			//��������
	float m_fSalary;  			//��н
public:
	Employee();
	Employee(const char *name, int age, char sex, const char *dept, float salary);
	Employee(Employee &e);

	~Employee()
	{
		cout << "Now destroying the instance of Employee" << endl;
	}
	void SetDept(const char *dept);
	void SetSalary(float salary);
	char* GetDept();
	float GetSalary();
	void ShowMe(); 				//��ʾ��Ա��Ϣ 
};
