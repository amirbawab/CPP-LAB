#include "Car.h"
#include <iostream>

void Car::forward() {
    std::cout << "Moving forward ..." << std::endl;
}

void Car::backward() {
    std::cout << "Moving backward ..." << std::endl;
}

void Car::left() {
    std::cout << "Turning left ..." << std::endl;
}

void Car::right() {
    std::cout << "Turning right ..." << std::endl;
}
