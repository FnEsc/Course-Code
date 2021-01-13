#include"pch.h"
#include "person.h"
Person::Person() : m_nAge(0), m_nSex(0)//���캯��  �����൱�ڳ�ʼ����ֵm_nAge=0 m_nSex=0
{
	strcpy_s(m_strName, "XXX");
}
Person::Person(const char *name, int age, char sex) : m_nAge(age), m_nSex(sex == 'm' ? 0 : 1)//���캯��  ��0Ů1  ����ǳ�Ա������ʼ���ټ�
{
	strcpy_s(m_strName, name);
}
Person::Person(const Person &p) : m_nAge(p.m_nAge), m_nSex(p.m_nSex)//�������캯��
{
	strcpy_s(m_strName, p.m_strName);
}
void Person::SetName(char *name)
{
	strcpy_s(m_strName, name);
}
void Person::SetAge(int age)
{
	m_nAge = age;
}
void Person::setSex(char sex)
{
	m_nSex = sex == 'm' ? 0 : 1;
}
char* Person::GetName()
{
	return m_strName;
}
int Person::GetAge()
{
	return m_nAge;
}
char Person::GetSex()
{
	return (m_nSex == 0 ? 'm' : 'f');
}
void Person::ShowMe()
{
	cout << GetName() << '\t' << GetAge() << '\t' << GetSex() << '\t';
}

