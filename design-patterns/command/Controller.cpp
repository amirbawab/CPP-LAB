#include "Controller.h"

void Controller::press(Command *command) {
    command->execute();
}
