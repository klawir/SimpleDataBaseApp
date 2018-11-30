#pragma once
#include "CustomerService.h"

class ExampleDataBase
{
	CustomerService *customerService;
	sqlite3 *dataBase;
	const char *query;
	string dataBaseName;
public:
	ExampleDataBase(CustomerService *customerService, sqlite3 *dataBase);
	CustomerService *getCustomerService();
	sqlite3 *getDataBase();
	void Create();
};