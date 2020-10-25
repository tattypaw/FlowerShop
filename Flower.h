#pragma once
#include <string>
#include "Postavtshik.h"

using namespace std;
class Flower {
protected:
	float cost;
	string type;
	string name;
	Postavtshik postavtshik;
public:
	Flower(float cost,string type,string name,Postavtshik postavtshik)
	{
		this->type = type;
		this->name = name;
		this->postavtshik = postavtshik;
		
		if (cost < 0) {
			throw 0;
		}
		else {
			this->cost = cost;
		}
	}
};