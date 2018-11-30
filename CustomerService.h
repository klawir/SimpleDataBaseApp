#pragma once
#include "IClient.h"

class CustomerService: public IClient
{
	static int DisplayData(void *data, int argc, char **argv, char **azColName);
	const char *query;
	int id;
public:
	void Init();
	string InsertClient();
	void setQuery(const char *sql);
	const char *getQuery();
	void ExecuteClient(sqlite3 *bazaDanych, const char *sql);
	void WriteID();
	int getID();
};