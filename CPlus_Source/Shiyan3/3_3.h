#pragma once
#include<iostream>
#include"birthday.h"
using namespace std;

int main_3_3()
{
	char n[50];
	int i, s, y, m, d;
	cout << "请输入学生姓名: ";
	cin >> n;
	cout << "请输入学生学号和成绩: ";
	cin >> i >> s;
	cout << "请输入学生的生日: ";
	cin >> y >> m >> d;
	Date d1(y, m, d);
	d1.display();
	Student s1(i, s, n);
	s1.display();
	return 0;
}
