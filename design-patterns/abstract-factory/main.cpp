#include "DashedFrameFactory.h"
#include "DottedFrameFactory.h"
#include "SolidFrameFactory.h"

#include <iostream>

int main() {
    auto dashed = new DashedFrameFactory();
    auto dotted = new DottedFrameFactory();
    auto solid = new SolidFrameFactory();

    auto dashed_frame = dashed->createFrame();
    auto dotted_frame = dotted->createFrame();
    auto solid_frame = solid->createFrame();

    dashed_frame->print();
    dotted_frame->print();
    solid_frame->print();

    delete dashed;
    delete dotted;
    delete solid;
    delete dashed_frame;
    delete dotted_frame;
    delete solid_frame;
}