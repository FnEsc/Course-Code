#pragma once
#include<iostream>
using namespace std;

void main_3_2_8() {
	int choice;
	std::cout << "Çë×ö³öÑ¡Ôñ£º" << std::endl << "1.Apple" << std::endl << "2.Banana" << std::endl;
	std::cin >> choice;
	switch (choice)
	{
	case 1:std::cout << "You choose Apple" << std::endl; break;
	case 2:std::cout << "You choose Banana" << std::endl; break;
	default:
		std::cout << "You choose what???" << std::endl;
		break;
	}
}