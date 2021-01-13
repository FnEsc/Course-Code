#pragma once
#include<iostream>
using namespace std;

int main_1_2() {

	int count;
	float obs, sum;
	cout << "Type your observation." << endl;
	cout << "Type 0 after the last!" << endl;
	count = 0;
	sum = 0;
	cin >> obs;
	while (obs > 0) {
		sum += obs;
		count++;
		cin >> obs;
	}
	if (count == 0) {
		cout << "Your did not write any observations!" << endl;
	}
	else {
		cout << "Number of observation given:" << count << endl;
	};
	cout << "Average value:" << sum / count << endl;

	return 0;
}
