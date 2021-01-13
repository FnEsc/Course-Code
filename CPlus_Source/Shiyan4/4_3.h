#pragma once
//main.cpp�ļ� ��ʾͼ����
#include "pch.h"
#include <iostream>
#include "shape.h"
#include "point.h"
#include "circle.h"
using namespace std;


void virtualViaPointer(const Shape *baseClassPtr)      //ͨ���������ָ������麯��ʵ�ֶ�̬��

{
	baseClassPtr->PrintShapeName();
	baseClassPtr->Print();
	cout << "Area = " << baseClassPtr->Area() << endl;
}
//ͨ������������÷����麯��ʵ�ֶ�̬��
void virtualViaReference(const Shape &baseClassRef)
{
	baseClassRef.PrintShapeName();
	baseClassRef.Print();
	cout << "Area = " << baseClassRef.Area() << endl;
}

int main_4_3()
{

	Point point(30, 50);             //����point��circle����
	Circle circle(120, 80, 10.0);

	point.PrintShapeName();       //���point��circle��rectangle������Ϣ
	point.Print();
	cout << endl;
	circle.PrintShapeName();
	circle.Print();

	Shape *arrayOfShapes[2];       //����������ָ��
	arrayOfShapes[0] = &point;
	arrayOfShapes[1] = &circle;

	cout << "Virtual function calls made off " << "base-class pointers\n";  //ͨ���������ָ��������������
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