#pragma once
#include<iostream>
using namespace std;

int main_3() {
	float a, b, c, max;
	cin >> a >> b >> c;
	max = a > b ? a : b;
	max = max > c ? max : c;
	cout << max;
	return 0;
}

