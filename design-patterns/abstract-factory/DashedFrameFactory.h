#pragma once

#include "AbstractFactory.h"
#include "DashedFrame.h"

class DashedFrameFactory : public AbstractFactory {
public:
    virtual DashedFrame * createFrame() {
        return new DashedFrame();
    }
};