#include"pch.h"
#include"box.h"

int main_box()
{
	std::cout << "学号：20160310321\t" << "姓名：林上满" << endl;
	Box box;
	box.setProperty();
	box.V_calculation();
	box.V_output();
	return 0;
}