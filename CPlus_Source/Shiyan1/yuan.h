#pragma once
#include<iostream>
using namespace std;

int main_yuan(){

	double r, C, S;
	const double PI = 3.14;
	cout << "ѧ�ţ�20160310321\t" << "ѧ����������" << endl;
	cout << "������Բ�İ뾶��Բ����ȡ3.14����";
	cin >> r;
	C = 2 * PI * r;				//�����ܳ�
	S = PI * r * r;				//�������
	cout << "Բ->�ܳ�Ϊ��" << C << endl;
	cout << "Բ->���Ϊ��" << S << endl;
	return 0;
}
