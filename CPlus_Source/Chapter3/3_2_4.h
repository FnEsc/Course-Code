#pragma once
#include<iostream>
using namespace std;

void main_3_2_4() {
	int math, phys, chem;
	int average;
	float scholarship; // 奖学金

	cout << "Enter scores of math, phys, and chem : ";
	cin >> math >> phys >> chem;
	average = (math + phys + chem) / 3 + 0.5; // +0.5做四舍五入
	if (average >= 90) {
		cout << "Excellent!" << endl;
		scholarship = 120.00;
	}
	else if(average >= 60){
		cout << "OK!" << endl;
		scholarship = 60.00;
	}
	else
	{
		cout << "false!" << endl;
		scholarship = 60.00;
	}
	cout << "Your scholarship is " << scholarship << endl;

}
