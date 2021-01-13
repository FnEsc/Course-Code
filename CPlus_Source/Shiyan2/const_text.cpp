#include"pch.h"
#include"const_text.h"

void R::print()
{
	cout << "In print:" << " R1 = " << R1 << endl;
}

void R::print() const
{
	cout << "In print _const: " << " R1 = " << R1 << endl;
}

int main_const_text() {
	const R a1;
	a1.print();
	R a2;
	a2.print();
	return 0;
}