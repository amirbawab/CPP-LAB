#pragma once

#include "ComputerBuilder.h"

class SuperComputerBuilder : public ComputerBuilder {
private:
    Computer * result;

public:
    SuperComputerBuilder() { result = new Computer(); }
    virtual Computer * getResult() { return result; }
    virtual void buildCPU() { result->setCPU("Incredible 5.0GHz Intel i-one-million."); }
    virtual void buildVideoCard() { result->setVideoCard("ATI MonsterX 500000GB"); }
    virtual void buildKeyboard() { result->setKeyboard("Actually Not Bad Keyboard"); }
    virtual void buildScreen() { result->setScreen("25 meters wide"); }
};