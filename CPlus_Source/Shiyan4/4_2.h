#pragma once
#include<iostream>
using namespace std;

class T {
	int x, y;
public:
	T(int a, int b) { x = a; y = b; }
	friend ostream & operator<<(ostream &os, T &a);
};
ostream& operator<<(ostream &os, T &a) //����������ostream& ���ز�����<<
{
	os << "x=" << a.x << "  y=" << a.y;
	return os;
}
void main_4_2()
{
	T a(1, 2);
	cout << a << endl;
}
