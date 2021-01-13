#pragma once
//main.cpp文件 演示图形类
#include "pch.h"
#include <iostream>
#include "shape.h"
#include "point.h"
#include "circle.h"
using namespace std;


void virtualViaPointer(const Shape *baseClassPtr)      //通过基类对象指针访问虚函数实现动态绑定

{
	baseClassPtr->PrintShapeName();
	baseClassPtr->Print();
	cout << "Area = " << baseClassPtr->Area() << endl;
}
//通过基类对象引用访问虚函数实现动态绑定
void virtualViaReference(const Shape &baseClassRef)
{
	baseClassRef.PrintShapeName();
	baseClassRef.Print();
	cout << "Area = " << baseClassRef.Area() << endl;
}

int main_4_3()
{

	Point point(30, 50);             //创建point、circle对象
	Circle circle(120, 80, 10.0);

	point.PrintShapeName();       //输出point、circle、rectangle对象信息
	point.Print();
	cout << endl;
	circle.PrintShapeName();
	circle.Print();

	Shape *arrayOfShapes[2];       //定义基类对象指针
	arrayOfShapes[0] = &point;
	arrayOfShapes[1] = &circle;

	cout << "Virtual function calls made off " << "base-class pointers\n";  //通过基类对象指针访问派生类对象
	for (int i = 0; i < 2; i++)
	{
		virtualViaPointer(arrayOfShapes[i]);
	}
	cout << "Virtual function calls made off " << "base-class references\n";
	for (int j = 0; j < 2; j++)
	{
		virtualViaReference(*arrayOfShapes[j]);
	}
	return 0;
}