#pragma once

#include "Computer.h"

class ComputerBuilder {
public:
    virtual Computer * getResult() = 0;
    virtual void buildCPU() = 0;
    virtual void buildVideoCard() = 0;
    virtual void buildKeyboard() = 0;
    virtual void buildScreen() = 0;
};