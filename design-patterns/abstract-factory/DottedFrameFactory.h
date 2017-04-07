#pragma once

#include "AbstractFactory.h"
#include "DottedFrame.h"

class DottedFrameFactory : public AbstractFactory {
public:
    DottedFrame * createFrame() {
        return new DottedFrame();
    }
};