#ifndef COMMAND_RIGHTCOMMAND_H
#define COMMAND_RIGHTCOMMAND_H

#include "Command.h"
#include "Car.h"

class RightCommand : public Command {
private:
    Car* car;
public:
    RightCommand(Car* car):car(car){}
    void execute();
};


#endif
