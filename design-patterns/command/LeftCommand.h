#ifndef COMMAND_LEFTCOMMAND_H
#define COMMAND_LEFTCOMMAND_H

#include "Command.h"
#include "Car.h"

class LeftCommand : public Command {
private:
    Car* car;
public:
    LeftCommand(Car* car):car(car){}
    void execute();
};


#endif
