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
	cout << "生日为" << year << "年" << month << "月" << day << "日" << endl;
}


Person::Person(char n[])
{
	strcpy_s(name, n);
	cout << "姓名为:" << name << endl;
}


Student::Student(int i, int s, char n[]) :Person(n)
{
	id = i;
	score = s;
	strcpy_s(name, n);
}


void Student::display()
{
	cout << "学号为" << id << " " << "成绩为" << score << endl;
}
