#include "CustomerService.h"

int CustomerService::DisplayData(void *data, int argc, char **argv, char **azColName)
{
	fprintf(stderr, "%s", (const char*)data);
	for (int a = 0; a<argc; a++)
		printf("%s = %s\n", azColName[a], argv[a] ? argv[a] : "NULL");
	printf("\n");
	return 0;
}
void CustomerService::Init()
{
	newClient();
}
string CustomerService::InsertClient()
{
	cin.ignore();
	cout << "name: ";
	client->WriteName();
	cout << "Lastname: ";
	client->WriteLastName();
	cout << "age: ";
	client->WriteAge();
	return  "insert into Client (Name, LastName, Age) values ('" + client->getName() + "','" + client->getLastName() + "'," + to_string(client->getAge()) + ");";
}
void CustomerService::setQuery(const char *sql)
{
	query = sql;
}
const char *CustomerService::getQuery()
{
	return query;
}
void CustomerService::ExecuteClient(sqlite3 *bazaDanych, const char *sql)
{
	sqlite3_exec(bazaDanych, sql, DisplayData, (void*)"", 0);
}
void CustomerService::WriteID()
{
	cin >> id;
}
int CustomerService::getID()
{
	return id;
}