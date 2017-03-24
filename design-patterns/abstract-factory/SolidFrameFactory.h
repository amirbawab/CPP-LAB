#pragma once

#include "AbstractFactory.h"
#include "SolidFrame.h"

class SolidFrameFactory : public AbstractFactory {
public:
    SolidFrame * createFrame() {
        return new SolidFrame();
    }
};