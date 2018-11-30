#include "ExampleDataBase.h"

ExampleDataBase::ExampleDataBase(CustomerService *customerService, sqlite3 *dataBase)
{
	cout << "DataBase name: ";
	getline(cin, dataBaseName);
	query =
		//"DROP TABLE IF EXISTS klient;"
		"CREATE TABLE Client("
		"ID				INTEGER  PRIMARY KEY,"
		"Name           text,"
		"LastName       text,"
		"Age			INTEGER);";
	dataBaseName += ".db";
	sqlite3_open(dataBaseName.c_str(), &dataBase);
	customerService->ExecuteClient(dataBase, query);
	this->customerService = customerService;
	this->dataBase = dataBase;
}
CustomerService *ExampleDataBase::getCustomerService()
{
	return customerService;
}
sqlite3 *ExampleDataBase::getDataBase()
{
	return dataBase;
}
void ExampleDataBase::Create()
{

}