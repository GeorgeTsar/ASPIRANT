#pragma once
#include<iostream>
using namespace std;

class Human
{
protected:
	char* name;
	int age;
public:
	Human();
	Human(const char*, int);
	~Human();
	void show_human();
};

