#include <iostream>
#include "FrameFactory.h"
using namespace std;

int main() {
    Frame* dashdeFrame = FrameFactory::createFrame("dashed");
    Frame* dottedFrame = FrameFactory::createFrame("dotted");
    Frame* solidFrame = FrameFactory::createFrame("solid");

    std::cout << "dashedFrame->print(): " << endl;
    dashdeFrame->print();

    std::cout << "dottedFrame->print(): " << endl;
    dottedFrame->print();

    std::cout << "solidFrame->print(): " << endl;
    solidFrame->print();
    return 0;
}