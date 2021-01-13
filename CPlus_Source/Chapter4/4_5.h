#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;

void main_4_5() {
	cout << rand() % 52 + 1 << "\t" << rand() % 52 + 1 << "\t" << rand() % 52 + 1 << endl; // 随机产生3个1-52的数
	for (int i = 0; i < 10; i++) {
		static int z = 0; //无static：0000000000 有static：0123456789
		cout << z;
		z++;
		//i = 9; //这个i会改变循环的i，循环次数改变
	}
}

