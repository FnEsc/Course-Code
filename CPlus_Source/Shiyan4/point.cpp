// Point.cpp文件  Point类的成员函数定义
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
