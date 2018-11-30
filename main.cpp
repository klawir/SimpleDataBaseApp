#pragma once
#include "CustomerService.h"
#include "ExampleDataBase.h"
#include "Menu.h"

int main()
{
	CustomerService *customerService= new CustomerService();
	customerService->Init();
	sqlite3 *dataBase = NULL;
	ExampleDataBase *exampleDataBase = new ExampleDataBase(customerService, dataBase);
	Menu menu(exampleDataBase);
	return 0;
}