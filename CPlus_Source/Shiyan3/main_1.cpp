#include"pch.h"
#include "employee.h"
using namespace std;

int main_1()
{
	Employee emp1;
	emp1.ShowMe();
	Employee emp2("Zhangli", 40, 'f', "ͼ���", 2000);
	emp2.ShowMe();
	cout << "���û���GetName()����ֵΪ: " << emp2.GetName() << endl;
	return 0;
}
