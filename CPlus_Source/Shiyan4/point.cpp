// Point.cpp�ļ�  Point��ĳ�Ա��������
#include"pch.h"
#include <iostream>
#include "point.h" 
using namespace std;
Point::Point(int a, int b) : x(a), y(b)
{
}
void Point::SetPoint(int a, int b)
{
	x = a;
	y = b;
}
void Point::Print() const
{
	cout << '[' << x << ", " << y << ']';
}
