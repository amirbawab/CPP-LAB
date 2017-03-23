#ifndef FACTORY_METHOD_FRAMEFACTORY_H
#define FACTORY_METHOD_FRAMEFACTORY_H

#include "Frame.h"
#include <string>

class FrameFactory {
public:
    static Frame* createFrame(std::string name);
};

#endif
