#pragma once
#include<iostream>
using namespace std;

bool is_prime(int x) {
	for (int i = 2; i <= x / 2; i++) {
		if (x%i == 0) {
			return 0;
		}
	}
	return 1;
}

void main_4_4() {
	int a, b;
	cout << "输入两个偶数（2起），范围内证明哥德巴赫猜想：";
	cin >> a >> b;
	int min = a >= b ? b : a;
	int max = a >= b ? a : b;
	bool flag;
	for (int i = min; i <= max; i += 2) {
		flag = 0;
		for (int j = 2; j < i; j++) {
			if (is_prime(j) && (is_prime(i - j))) {
				cout << i << "=" << j << "+" << i - j << endl;
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			cout << "???" << endl;
		};
	}
}

