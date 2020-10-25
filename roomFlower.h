#pragma once
#include <string>
#include "Flower.h"
#include "Postavtshik.h"

using namespace std;

class RoomFlower : public Flower {
public:
    string ground;
    string climate;
    RoomFlower(float cost, string type, string name, string ground, string climate, Postavtshik postavtshik)
    {
        this-> ground= ground;
        this-> climate= climate;
    }
};