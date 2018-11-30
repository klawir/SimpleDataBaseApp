#include "Menu.h"

Menu::Menu(ExampleDataBase *exampleDataBase)
{
	this->customerService = exampleDataBase->getCustomerService();
	this->dataBase = exampleDataBase->getDataBase();
	Show();
}
void Menu::Show()
{
	while (1)
	{
		cout << "1) Insert data" << endl;
		cout << "2) Show data" << endl;
		cout << "3) Delete data" << endl;
		cin >> menu;
		string sql = "delete from Client where id=";
		switch (menu)
		{
		case insert:
			customerService->ExecuteClient(dataBase, customerService->InsertClient().c_str());
			break;
		case show:
			customerService->setQuery("select * from Client");
			customerService->ExecuteClient(dataBase, customerService->getQuery());
			break;
		case del:
			cout << "id: ";
			customerService->WriteID();
			sql += to_string(customerService->getID());
			customerService->setQuery(sql.c_str());
			customerService->ExecuteClient(dataBase, customerService->getQuery());
			break;
		default:
			break;
		}
	}
}