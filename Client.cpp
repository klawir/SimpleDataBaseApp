#include "Client.h"

void Client::WriteName()
{
	getline(cin, name);
}
void Client::WriteLastName()
{
	getline(cin, lastname);
}
void Client::WriteAge()
{
	cin >> age;
}

string Client::getName()
{
	return name;
}
string Client::getLastName()
{
	return lastname;
}
int Client::getAge()
{
	return age;
}