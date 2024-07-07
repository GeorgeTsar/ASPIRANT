#include "Aspirant.h"
#include "Student.h"
#include "Human.h"
#include<iostream>
using namespace std;

Aspirant::Aspirant()
{
	institute = nullptr;
	scholarship = 0;
	diploma = nullptr;
}

Aspirant::Aspirant(const char* n, int a, const char* in, double s, const char* d) :Student(in, s)
{
	diploma = new char[strlen(d) + 1];
	strcpy_s(diploma, strlen(d) + 1, d);
}

Aspirant::~Aspirant()
{
	if (institute != nullptr)
	{
		delete[] institute;
	}
}

void Aspirant::show()
{
	show_student();
	cout << "Diploma: " << diploma << endl;
}
