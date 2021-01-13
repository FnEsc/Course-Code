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
		cout << "请依次输入长方柱的长、宽、高（用空格分开）：";
		cin >> length >> width >> height;
	}
	void V_calculation() {
		volume = length * width*height;
	}
	void V_output() {
		cout << "计算出的长方柱的体积为：" << volume << endl;
	}
};

int main_box();

