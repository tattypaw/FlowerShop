#pragma once
#include <string>
#include "Flower.h"
#include "Postavtshik.h"

using namespace std;

class CutFlower : public Flower {
public:
    short timeKeeping;
    CutFlower(float cost, string type, string name, short timeKeeping, Postavtshik postavtshik)
    {
        this->timeKeeping = timeKeeping;
    }
};