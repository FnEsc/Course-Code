#include"pch.h"
#include "employee.h"
using namespace std;

int main_1()
{
	Employee emp1;
	emp1.ShowMe();
	Employee emp2("Zhangli", 40, 'f', "图书馆", 2000);
	emp2.ShowMe();
	cout << "调用基类GetName()返回值为: " << emp2.GetName() << endl;
	return 0;
}
