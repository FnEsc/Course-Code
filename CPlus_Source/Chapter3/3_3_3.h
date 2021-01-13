#pragma once
#include<iostream>
using namespace std;
//牛顿法求平方根

void main_3_3_3() {
	const float  EPSILON = 1E-5;
	float num, root, pre;
	cout << "请输入一个正整数：";
	cin >> num;
	if (num <= 0) cout << "???" << endl;
	else {
		root = 1;
		do {
			pre = root;
			root = (num / root + root) / 2;
		} while (pre - root > EPSILON || root - pre > EPSILON); //减法运算优先比较运算
		cout << "The root of " << num << " is " << root << endl;
	}
}