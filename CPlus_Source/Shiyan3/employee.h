#pragma once
#include "person.h"
class Employee : public Person 		//雇员类定义
{
	char m_strDept[20];			//工作部门
	float m_fSalary;  			//月薪
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
	void ShowMe(); 				//显示雇员信息 
};
