#include "pch.h"
#include "Person_1.h"
using namespace std;
Person_1::Person_1() : m_nAge(0), m_nSex(0){	//构造函数

	strcpy_s(m_strName, "XXX");
}
Person_1::Person_1(const char *name, int age, char sex) : m_nAge(age), m_nSex(sex == 'm' ? 0 : 1){	//构造函数
	strcpy_s(m_strName, name);
}
Person_1::Person_1(const Person_1 &p) : m_nAge(p.m_nAge), m_nSex(p.m_nSex){	//拷贝构造函数
	strcpy_s(m_strName, p.m_strName);
}
void Person_1::SetName(const char *name){
	strcpy_s(m_strName, name);
}
void Person_1::SetAge(int age){
	m_nAge = age;
}
void Person_1::setSex(char sex){
	m_nSex = sex == 'm' ? 0 : 1;
}
const char* Person_1::GetName() const{
	return m_strName;
}
int Person_1::GetAge() const{
	return m_nAge;
}
char Person_1::GetSex() const{
	return (m_nSex == 0 ? 'm' : 'f');
}
void Person_1::ShowMe() const{
	cout << GetName() << '\t' << GetAge() << '\t' << GetSex() << '\t' << endl;
}

int main_person_1()
{
	Person_1  *p1, *p2; 		//声明两个指向对象的指针	
	p1 = new Person_1;			//动态生成一个Person_1对象
	cout << "默认状态下，    Person_1的三个变量: \t";
	p1->ShowMe();
	p1->SetAge(19);		//	函数赋值
	p1->SetName("张三");
	p1->setSex('m');
	cout << "函数调用赋值后，Person_1的三个变量: \t";
	cout << p1->GetName() << "\t" << p1->GetAge() << "\t" << p1->GetSex() << endl;   //函数输出
	p2 = new Person_1("李四", 19, 'm');		//动态生成一个Person_1对象并用构造函数初始化
	cout << "构造函数初始化，Person_2的三个变量: \t";
	p2->ShowMe();
	delete p1;				//释放p1指针指向对象所占的空间
	delete p2;				//释放p2指针指向对象所占的空间
	return 0;
}

