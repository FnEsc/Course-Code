#pragma once
#include<iostream>
using namespace std;

int main_yuan(){

	double r, C, S;
	const double PI = 3.14;
	cout << "学号：20160310321\t" << "学生：林上满" << endl;
	cout << "请输入圆的半径（圆周率取3.14）：";
	cin >> r;
	C = 2 * PI * r;				//计算周长
	S = PI * r * r;				//计算面积
	cout << "圆->周长为：" << C << endl;
	cout << "圆->面积为：" << S << endl;
	return 0;
}
