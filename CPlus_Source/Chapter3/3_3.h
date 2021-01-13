#pragma once
#include<iostream>
#include<cmath>
using namespace std;
//三位数的水仙花数
void main_3_3() {
	for (int i = 100; i < 1000; i++) {
		if (pow(i / 100,3) + pow((i / 10) % 10, 3) + pow(i % 10,3) == i) {
			cout << i << endl;
		};
	}
	//cout << num << endl;
}

