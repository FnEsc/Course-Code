#include"pch.h"
#include "employee.h"
Employee::Employee() : m_fSalary(0.0)
{
	strcpy_s(m_strDept, "xxxx");
}
Employee::Employee(const char *name, int age, char sex, const char *dept, float salary)
	: Person(name, age, sex), m_fSalary(salary)
{
	strcpy_s(m_strDept, dept);
}
Employee::Employee(Employee &e) : Person(e.GetName(), e.GetAge(), e.GetSex()),
m_fSalary(e.m_fSalary)
{
	strcpy_s(m_strDept, e.m_strDept);
}
void Employee::SetDept(const char *dept)
{
	strcpy_s(m_strDept, dept);
}
void Employee::SetSalary(float salary)
{
	m_fSalary = salary;
}
char* Employee::GetDept()
{
	return m_strDept;
}
float Employee::GetSalary()
{
	return m_fSalary;
}

void Employee::ShowMe()
{
	Person::ShowMe();
	cout << m_strDept << "\t" << m_fSalary << endl;
}
