#include"pch.h"
#include "person_2.h"
Person_2::Person_2() : m_nAge(0), m_nSex(0)//���캯��
{
	strcpy_s(m_strName, "XXX");
}
Person_2::Person_2(const char *name, int age, char sex) : m_nAge(age), m_nSex(sex == 'm' ? 0 : 1)//���캯��
{
	strcpy_s(m_strName, name);
}
Person_2::Person_2(const Person_2 &p) : m_nAge(p.m_nAge), m_nSex(p.m_nSex)//�������캯��
{
	strcpy_s(m_strName, p.m_strName);
}
void Person_2::SetName(const char *name)
{
	strcpy_s(m_strName, name);
}
void Person_2::SetAge(int age)
{
	m_nAge = age;
}
void Person_2::setSex(char sex)
{
	m_nSex = sex == 'm' ? 0 : 1;
}
char* Person_2::GetName()
{
	return m_strName;
}
int Person_2::GetAge()
{
	return m_nAge;
}
char Person_2::GetSex()
{
	return (m_nSex == 0 ? 'm' : 'f');
}
void Person_2::ShowPerson_2()
{
	cout << GetName() << '\t' << GetAge() << '\t' << GetSex() << endl;
}

int main_person_2() {
		Person_2  *p1, *p2; 		//��������ָ������ָ��	
		p1 = new Person_2;			//��̬����һ��Person_2����
		cout << "person1: \t";
		p1->ShowPerson_2();
		p1->SetAge(19);
		cout << "person1: \t";
		p1->ShowPerson_2();
		p2 = new Person_2("Zhang3", 19, 'm');		//��̬����һ��Person_2����
		cout << "person2: \t";
		p2->ShowPerson_2();
		*p2 = *p1;				//����֮��ĸ�ֵ
		cout << "person2: \t";
		p2->ShowPerson_2();
		delete p1;				//�ͷ�p1ָ��ָ�������ռ�Ŀռ�
		delete p2;				//�ͷ�p2ָ��ָ�������ռ�Ŀռ�
		return 0;


}