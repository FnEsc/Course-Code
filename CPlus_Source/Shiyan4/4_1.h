#pragma once

#include <iostream>
using namespace std;

class COMPLEX {
public:
	COMPLEX(double r = 0, double i = 0);                 //构造函数
	COMPLEX(const COMPLEX& other);	            //拷贝构造函数
	void print();				                     //打印复数
	COMPLEX operator +(const COMPLEX& other);       //重载加法运算符（二元）
	COMPLEX operator -(const COMPLEX& other);       //重载减法运算符（二元）
	COMPLEX operator -();		                   //重载求负运算符（一元）
	COMPLEX operator =(const COMPLEX& other);     //重载赋值运算符（二元）
protected:
	double real, image;	                          // 复数的实部与虚部
};

COMPLEX::COMPLEX(double r, double i)
{
	real = r;
	image = i;
}

COMPLEX::COMPLEX(const COMPLEX& other)
{
	real = other.real;
	image = other.image;
}

void COMPLEX::print()
{
	cout << real;
	if (image > 0)cout << "+" << image << "i";
	else if (image < 0)cout << image << "i";
	cout << endl;
}

COMPLEX  COMPLEX::operator +(const COMPLEX& other)
{
	COMPLEX temp;
	temp.real = real + other.real;                             //real=real+other.real;
	temp.image = image + other.image;                       //image=image+other.image;
	return temp;                                       //*this;
}

COMPLEX COMPLEX::operator -(const COMPLEX& other)
{
	COMPLEX temp;
	temp.real = real - other.real;
	temp.image = image - other.image;
	return temp;
}

COMPLEX COMPLEX::operator -()
{
	COMPLEX temp;
	temp.real = -real;
	temp.image = -image;
	return temp;
}

COMPLEX COMPLEX::operator =(const COMPLEX& other)
{
	real = other.real;
	image = other.image;
	return *this;                      //返回对象值
}
int main_4_1()
{
	COMPLEX c1(1, 2);	            // 定义一个值为1 + 2i的复数c1
	COMPLEX c2(2);		      // 定义一个值为2的复数c2
	//c2.print();
	COMPLEX c3(c1);	          // 用COMPLEX(const COMPLEX& other)创建一个值同c1的新复数				   
	c3.print();			    // 打印c3原来的值
	c1 = c1 + c2 + c3;              // 将c1加上c2再加上c3赋值给c1
	c2 = -c3;		     	   // c2等于c3求负
	c3 = c2 - c1;	          	  // c3等于c2减去c1
	c3.print();			 // 再打印运算后c3的值
	//cout<<sizeof(c1)<<endl;
	return 0;
}
