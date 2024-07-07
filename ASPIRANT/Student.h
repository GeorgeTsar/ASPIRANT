#pragma once
#include "Human.h"
#include<iostream>
using namespace std;

class Student : public Human
{
protected:
	char* institute;
	double scholarship;
public:
	Student();
	Student(const char* n, int a, const char* in, double s);
	~Student();
	void show_student();
};

