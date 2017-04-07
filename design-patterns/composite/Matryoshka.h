#pragma once

#include "Composite.h"
#include <iostream>

class Matryoshka : public Composite {
public:
    Matryoshka(int size): size(size) {};
    void print() {
        std::cout << "Size: " << this->size << std::endl;
    }

    void addMatryoshka(Matryoshka *matryoshka) {
        this->matryoshka = matryoshka;
    }

    Matryoshka * getMatryoshka() {
        return this->matryoshka;
    }

private:
    int size;
    Matryoshka *matryoshka = nullptr;
};