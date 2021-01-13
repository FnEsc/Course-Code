#pragma once

#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "Constructor1_A" << 1 << endl;
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
	B(int m, int n, int x, int T) :  b(n), a(x), y(T)
	{
		cout << "Constructor2_B" << y << endl;
	}
	~B()
	{
		cout << "Destructor_B" << y << endl;
	}
private:
	int y;
	A a;
	A b;
};
int main_cixu()
{
	B b2(5, 6, 7, 8);
	return 0;
}
