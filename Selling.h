#pragma once
#include <string>
#include "Flower.h"
#include "cutFlower.h"
#include "roomFlower.h"
#include "Postavtshik.h"


using namespace std;

class Selling : public Postavtshik, Flower {
public:
    float number;
    string date;

};