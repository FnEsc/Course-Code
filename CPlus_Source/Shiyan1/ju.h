#pragma once
#include<iostream>
using namespace std;

int main_ju(){

	double l, w, S;
	cout << "学号：20160310321\t" << "学生：林上满" << endl;
	cout << "请输入矩形的长和宽（请用空格分开）:";
	cin >> l >> w;
	S = l * w;       //计算面积
	cout << "矩形的面积为：" << S << endl;
	return 0;
}
