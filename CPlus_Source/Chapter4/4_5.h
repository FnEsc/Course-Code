#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;

void main_4_5() {
	cout << rand() % 52 + 1 << "\t" << rand() % 52 + 1 << "\t" << rand() % 52 + 1 << endl; // �������3��1-52����
	for (int i = 0; i < 10; i++) {
		static int z = 0; //��static��0000000000 ��static��0123456789
		cout << z;
		z++;
		//i = 9; //���i��ı�ѭ����i��ѭ�������ı�
	}
}

