#pragma once
#include<iostream>
using namespace std;

int main_swap(){

	int a, b, t;
	cout << "学号：20160310321\t" << "学生：林上满" << endl;
	cout << "请输入两个数（用空格分开）：";
	cin >> a >> b;
	t = a;			//进行交换
	a = b;
	b = t;
	cout << "交换后两个数分别是：" << a << " " << b << endl;
	return 0;
}
