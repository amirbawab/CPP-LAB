#pragma once

#include "Computer.h"
#include "ComputerBuilder.h"

class Director {
private:
    ComputerBuilder *builder;
public:
    void setComputerBuilder(ComputerBuilder *builder) { this->builder = builder; }
    void buildSuperComputer() {
        builder->buildCPU();
        builder->buildKeyboard();
        builder->buildVideoCard();
        builder->buildScreen();
    }

    Computer * getResult() { return builder->getResult(); }

};