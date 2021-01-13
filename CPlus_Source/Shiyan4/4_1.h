#pragma once

#include <iostream>
using namespace std;

class COMPLEX {
public:
	COMPLEX(double r = 0, double i = 0);                 //���캯��
	COMPLEX(const COMPLEX& other);	            //�������캯��
	void print();				                     //��ӡ����
	COMPLEX operator +(const COMPLEX& other);       //���ؼӷ����������Ԫ��
	COMPLEX operator -(const COMPLEX& other);       //���ؼ������������Ԫ��
	COMPLEX operator -();		                   //�������������һԪ��
	COMPLEX operator =(const COMPLEX& other);     //���ظ�ֵ���������Ԫ��
protected:
	double real, image;	                          // ������ʵ�����鲿
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
	return *this;                      //���ض���ֵ
}
int main_4_1()
{
	COMPLEX c1(1, 2);	            // ����һ��ֵΪ1 + 2i�ĸ���c1
	COMPLEX c2(2);		      // ����һ��ֵΪ2�ĸ���c2
	//c2.print();
	COMPLEX c3(c1);	          // ��COMPLEX(const COMPLEX& other)����һ��ֵͬc1���¸���				   
	c3.print();			    // ��ӡc3ԭ����ֵ
	c1 = c1 + c2 + c3;              // ��c1����c2�ټ���c3��ֵ��c1
	c2 = -c3;		     	   // c2����c3��
	c3 = c2 - c1;	          	  // c3����c2��ȥc1
	c3.print();			 // �ٴ�ӡ�����c3��ֵ
	//cout<<sizeof(c1)<<endl;
	return 0;
}
