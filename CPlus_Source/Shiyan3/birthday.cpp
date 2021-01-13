#include"pch.h"
#include"birthday.h"
#include<string.h>
using namespace std;

Date::Date(int y, int m, int d)
{
	year = y;
	month = m;
	day = d;
}


void Date::display()
{
	cout << "����Ϊ" << year << "��" << month << "��" << day << "��" << endl;
}


Person::Person(char n[])
{
	strcpy_s(name, n);
	cout << "����Ϊ:" << name << endl;
}


Student::Student(int i, int s, char n[]) :Person(n)
{
	id = i;
	score = s;
	strcpy_s(name, n);
}


void Student::display()
{
	cout << "ѧ��Ϊ" << id << " " << "�ɼ�Ϊ" << score << endl;
}
