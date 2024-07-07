#include "Human.h"

Human::Human()
{
	name = nullptr;
	age = 0;
}

Human::Human(const char* n, int a)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	age = a;
}

Human::~Human()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	age = 0;
}

void Human::show_human()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
}
