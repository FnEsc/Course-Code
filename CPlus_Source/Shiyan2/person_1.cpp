#include "pch.h"
#include "Person_1.h"
using namespace std;
Person_1::Person_1() : m_nAge(0), m_nSex(0){	//���캯��

	strcpy_s(m_strName, "XXX");
}
Person_1::Person_1(const char *name, int age, char sex) : m_nAge(age), m_nSex(sex == 'm' ? 0 : 1){	//���캯��
	strcpy_s(m_strName, name);
}
Person_1::Person_1(const Person_1 &p) : m_nAge(p.m_nAge), m_nSex(p.m_nSex){	//�������캯��
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
	Person_1  *p1, *p2; 		//��������ָ������ָ��	
	p1 = new Person_1;			//��̬����һ��Person_1����
	cout << "Ĭ��״̬�£�    Person_1����������: \t";
	p1->ShowMe();
	p1->SetAge(19);		//	������ֵ
	p1->SetName("����");
	p1->setSex('m');
	cout << "�������ø�ֵ��Person_1����������: \t";
	cout << p1->GetName() << "\t" << p1->GetAge() << "\t" << p1->GetSex() << endl;   //�������
	p2 = new Person_1("����", 19, 'm');		//��̬����һ��Person_1�����ù��캯����ʼ��
	cout << "���캯����ʼ����Person_2����������: \t";
	p2->ShowMe();
	delete p1;				//�ͷ�p1ָ��ָ�������ռ�Ŀռ�
	delete p2;				//�ͷ�p2ָ��ָ�������ռ�Ŀռ�
	return 0;
}

