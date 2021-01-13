#pragma once
#include<iostream>
using namespace std;

bool is_run_year(int year) {
	if (year % 100 == 0) {
		if (year % 400 == 0) {
			return 1;
		};
	}
	else
	{
		if (year % 4 == 0) {
			return 1;
		};
	}
	return 0;

}

int month_days(int year, int month) {
	switch (month)
	{
	case 1:return 31;
	case 2:
		if (is_run_year(year)) {
			return 29;
		}
		else
		{
			return 28;
		};
	case 3:return 31;
	case 4:return 30;
	case 5:return 31;
	case 6:return 30;
	case 7:return 31;
	case 8:return 31;
	case 9:return 30;
	case 10:return 31;
	case 11:return 30;
	case 12:return 31;
	default:
		cout << "???" << endl << "!" << endl;
		break;
	}
	
}

void main_4_2() {
	int year, month, day, sum = 0;
	cout << "year month day : ";
	cin >> year >> month >> day;
	//cout << day;
	//cout << ( 0< day < 0); //³ö´í£¡£¡£¡
	if (  999 < year && year < 10000 && 0 < month && month < 13 ) {
		for (int i = 1; i < month; i++) {
			sum += month_days(year, i);
		}
		if (day > month_days(year, month)) {
			cout << "???";
			return;
		}
		sum += day;
		cout << "days: " << sum << endl;		
	}
	else {
		cout << "???";
	};
	return;
	
}