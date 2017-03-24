#ifndef COMMAND_FORWARDCOMMAND_H
#define COMMAND_FORWARDCOMMAND_H

#include "Command.h"
#include "Car.h"

class ForwardCommand : public Command {
private:
    Car* car;
public:
    ForwardCommand(Car* car):car(car){}
    void execute();
};


#endif
