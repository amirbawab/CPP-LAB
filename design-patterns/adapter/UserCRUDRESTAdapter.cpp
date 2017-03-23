#include "UserCRUDRESTAdapter.h"

void UserCRUDRESTAdapter::create(int id, std::string firstName, std::string lastName) {
    this->userREST->createREST(std::to_string(id)+"/"+firstName+"/"+lastName);
}

void UserCRUDRESTAdapter::remove(int id) {
    this->userREST->removeREST(std::to_string(id));
}

void UserCRUDRESTAdapter::edit(int id, std::string firstName, std::string lastName) {
    this->userREST->editREST(std::to_string(id)+"/"+firstName+"/"+lastName);
}

void UserCRUDRESTAdapter::read(int id) {
    this->userREST->readREST(std::to_string(id));
}