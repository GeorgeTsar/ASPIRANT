#include "Student.h"
#include "Human.h"
#include<iostream>
using namespace std;



Student::Student()
{
	//name = nullptr;
	//age = 0;
	institute = nullptr;
	scholarship = 0;
}

Student::Student(const char* n, int a, const char* in, double s) :Human(n, a)
{
	institute = new char[strlen(in) + 1];
	strcpy_s(institute, strlen(in) + 1, in);
	scholarship = s;
}

Student::~Student()
{
	if (institute != nullptr)
	{
		delete[] institute;
	}
	age = 0;
}

void Student::show_student()
{
	show_human();
	cout << "Institute: " << institute << endl;
	cout << "Scholarship: " << scholarship << endl;
}
