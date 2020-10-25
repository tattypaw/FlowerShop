#pragma once
#include <string>

using namespace std;

class Postavtshik {
protected:
	string name;
	string bank;
	string adress;
	string telefone;
public:
Postavtshik(){}
Postavtshik(string name, string bank, string adress, string telefone)
{
	this->name = name;
	this->bank = bank;
	this->adress = adress; 
	this->telefone = telefone;
}
string GetName()
{
	return name;
}
string GetAdress()
{
	return adress;
}
string GetBank()
{
	return bank;
}
string GetTelefone()
{
	return telefone;
}
};