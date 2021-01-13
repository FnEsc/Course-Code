#pragma once
#include<iostream>
using namespace std;

void main_3_3_2() {
	int choice = 1;
	while (choice != 0) {
		std::cout << "请做出选择：" << std::endl << "1.Apple" << std::endl << "2.Banana" << std::endl << "0.Exit" << std::endl;
		std::cin >> choice;
		switch (choice)
		{
		case 0:break; // 这里退出while循环
		case 1:std::cout << "You choose Apple" << std::endl; break; break; // 无论这里多少个break都不能退出while
		case 2:std::cout << "You choose Banana" << std::endl; break;
		default:
			std::cout << "You choose what???" << std::endl;
			break;
		}
	}
}