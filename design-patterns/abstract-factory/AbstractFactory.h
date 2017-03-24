#pragma once

#include "Frame.h"

class AbstractFactory {
public:
    virtual Frame * createFrame() = 0;
};