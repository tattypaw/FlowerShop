#pragma once
#include <string>
#include "Flower.h"
#include "cutFlower.h"
#include "roomFlower.h"
#include "Postavtshik.h"


using namespace std;

class Postavka : public Postavtshik, Flower {
public:
    float number;
    string date;
    
};