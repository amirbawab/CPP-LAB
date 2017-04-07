#include "Matryoshka.h"

int main(void) {
    Matryoshka* biggest = new Matryoshka(5);
    biggest->addMatryoshka(new Matryoshka(4));
    biggest->getMatryoshka()->addMatryoshka(new Matryoshka(3));

    Matryoshka *temp = biggest;
    while (temp != nullptr) {
        temp->print();
        temp = temp->getMatryoshka();
    }

    // Clean up memory
    temp = biggest;
    while (temp != nullptr) {
        Matryoshka *delete_me = temp;
        temp = temp->getMatryoshka();
        delete delete_me;
    }
}