#pragma once
#include "Student.h"

class Aspirant : public Student
{
	char* diploma;
public:
	Aspirant();
	Aspirant(const char* n, int a, const char* in, double s, const char* d);
	~Aspirant();
	void show();
};

