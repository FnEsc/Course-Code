#pragma once
#include<iostream>
#include<windows.h>
using namespace std;

class Box
{
private:
	double length, width, height, volume;
public:
	void setProperty() {
		cout << "���������볤�����ĳ������ߣ��ÿո�ֿ�����";
		cin >> length >> width >> height;
	}
	void V_calculation() {
		volume = length * width*height;
	}
	void V_output() {
		cout << "������ĳ����������Ϊ��" << volume << endl;
	}
};

int main_box();

