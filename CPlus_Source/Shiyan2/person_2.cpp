#include"pch.h"
#include "person_2.h"
Person_2::Person_2() : m_nAge(0), m_nSex(0)//构造函数
{
	strcpy_s(m_strName, "XXX");
}
Person_2::Person_2(const char *name, int age, char sex) : m_nAge(age), m_nSex(sex == 'm' ? 0 : 1)//构造函数
{
	strcpy_s(m_strName, name);
}
Person_2::Person_2(const Person_2 &p) : m_nAge(p.m_nAge), m_nSex(p.m_nSex)//拷贝构造函数
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
		Person_2  *p1, *p2; 		//声明两个指向对象的指针	
		p1 = new Person_2;			//动态生成一个Person_2对象
		cout << "person1: \t";
		p1->ShowPerson_2();
		p1->SetAge(19);
		cout << "person1: \t";
		p1->ShowPerson_2();
		p2 = new Person_2("Zhang3", 19, 'm');		//动态生成一个Person_2对象
		cout << "person2: \t";
		p2->ShowPerson_2();
		*p2 = *p1;				//对象之间的赋值
		cout << "person2: \t";
		p2->ShowPerson_2();
		delete p1;				//释放p1指针指向对象所占的空间
		delete p2;				//释放p2指针指向对象所占的空间
		return 0;


}