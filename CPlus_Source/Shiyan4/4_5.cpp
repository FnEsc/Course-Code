#include"pch.h"
#include"4_5.h"
#include<iostream>
#include"Employee.h"
#include"Person.h"
#include"Salesman.h"
#include"Timeworker.h"
using namespace std;

void main_4_5() {
	Person *p1;
	Employee e(1, "employee");
	Salesman s(2, "salesman", 2500);
	Timeworker t(3, "timeworker", 300);

	p1 = &e;
	p1->calculation();
	p1->display();
	std::cout << "End employee!" << std::endl;

	p1 = &s;
	p1->calculation();
	p1->display();
	std::cout << "End salesman!" << std::endl;

	p1 = &t;
	p1->calculation();
	p1->display();
	std::cout << "End timeworker!" << std::endl;

}