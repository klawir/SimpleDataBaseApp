#pragma once
#include "Client.h"

class IClient
{
protected:
	Client *client;
public:
	void newClient()
	{
		client = new Client();
	}
	virtual string InsertClient() = 0;
	virtual void setQuery(const char *query) = 0;
};