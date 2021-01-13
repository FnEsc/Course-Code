#pragma once
#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "Constructor1_A" << x << endl;
	}
	A(int m) : x(m)
	{
		cout << "Constructor2_A" << x << endl;
	}
	~A()
	{
		cout << "Destructor_A" << x << endl;
	}
private:
	int x;
};
class B : public A
{
public:
	B()
	{
		cout << "Constructor1_B" << y << endl;
	}
	B(int m, int n, int l) : A(m), a(n), y(l)
	{
		cout << "Constructor2_B" << y << endl;
	}
	~B()
	{
		cout << "Destructor_B" << y << endl;
	}
private:
	A a;
	int y;
};
int main_3_2()
{
	B b2(5, 6, 7);
	return 0;
}
