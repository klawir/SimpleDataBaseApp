#pragma once
#include "Librares.h"

class Client
{
	string name;
	string lastname;
	int age;
public:
	void WriteName();
	void WriteLastName();
	void WriteAge();
	string getName();
	string getLastName();
	int getAge();
};