#include "Director.h"
#include "SuperComputerBuilder.h"

int main(void) {
    Director director;
    director.setComputerBuilder(new SuperComputerBuilder());
    director.buildSuperComputer();

    auto result = director.getResult();
    std::cout << *result << std::endl;

    delete result;
}