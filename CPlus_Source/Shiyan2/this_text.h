#pragma once
#include <iostream>
using namespace std;

class Test
{
	int x;
public:
	Test(int = 0);
	void print() const;
};

Test::Test(int a) : x(a) // constructor
{}

void Test::print() const
{
	cout << "x = " << x
		<< "\nthis->x = " << this->x
		<< "\n(*this).x = " << (*this).x
		<< "\nthis = " << this << endl;
}
int main_this_text()
{
	Test testObject(12);
	testObject.print();
	cout << "&testObject = " << &testObject << endl;
	return 0;
}

