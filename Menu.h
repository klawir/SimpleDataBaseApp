#pragma once
#include "CustomerService.h"
#include "ExampleDataBase.h"

class Menu
{
	enum { zero, insert, show, del };
	int menu;
	CustomerService *customerService;
	sqlite3 *dataBase;
public:
	Menu(ExampleDataBase *exampleDataBase);
	void Show();
};