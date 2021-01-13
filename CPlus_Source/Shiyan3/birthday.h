#pragma once
#include<iostream>


class Date {
public:
	Date(int y, int m, int d);
	void display();
protected:
	int year, month, day;
};



class Person {
public:
	Person(char n[]);
protected:
	char name[50];
};



class Student :public Person {
public:
	Student(int i, int s, char n[]);
	void display();
protected:
	int id, score;
};
