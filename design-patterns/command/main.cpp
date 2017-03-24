#include <iostream>

#include "Car.h"
#include "ForwardCommand.h"
#include "BackwardCommand.h"
#include "LeftCommand.h"
#include "RightCommand.h"
#include "Controller.h"

using namespace std;

int main() {

    // Build car
    Car* car = new Car();

    // Create commands
    ForwardCommand* forwardCommand = new ForwardCommand(car);
    BackwardCommand* backwardCommand = new BackwardCommand(car);
    LeftCommand* leftCommand = new LeftCommand(car);
    RightCommand* rightCommand = new RightCommand(car);

    // Controller
    Controller* controller = new Controller();

    // Press commands
    controller->press(forwardCommand);
    controller->press(backwardCommand);
    controller->press(leftCommand);
    controller->press(rightCommand);
    return 0;
}