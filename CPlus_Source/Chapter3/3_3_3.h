#pragma once
#include<iostream>
using namespace std;
//ţ�ٷ���ƽ����

void main_3_3_3() {
	const float  EPSILON = 1E-5;
	float num, root, pre;
	cout << "������һ����������";
	cin >> num;
	if (num <= 0) cout << "???" << endl;
	else {
		root = 1;
		do {
			pre = root;
			root = (num / root + root) / 2;
		} while (pre - root > EPSILON || root - pre > EPSILON); //�����������ȱȽ�����
		cout << "The root of " << num << " is " << root << endl;
	}
}