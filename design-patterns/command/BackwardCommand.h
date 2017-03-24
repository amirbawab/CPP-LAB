#ifndef COMMAND_BACKWARDCOMMAND_H
#define COMMAND_BACKWARDCOMMAND_H

#include "Command.h"
#include "Car.h"

class BackwardCommand : public Command {
private:
    Car* car;
public:
    BackwardCommand(Car* car):car(car){}
    void execute();
};


#endif
