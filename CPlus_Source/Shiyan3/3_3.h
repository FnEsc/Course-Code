#pragma once
#include<iostream>
#include"birthday.h"
using namespace std;

int main_3_3()
{
	char n[50];
	int i, s, y, m, d;
	cout << "������ѧ������: ";
	cin >> n;
	cout << "������ѧ��ѧ�źͳɼ�: ";
	cin >> i >> s;
	cout << "������ѧ��������: ";
	cin >> y >> m >> d;
	Date d1(y, m, d);
	d1.display();
	Student s1(i, s, n);
	s1.display();
	return 0;
}
