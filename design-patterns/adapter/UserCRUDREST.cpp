#include "UserCRUDREST.h"

#include <iostream>

void UserCRUDREST::createREST(std::string url) {
    std::cout << "POST: /create/" << url << std::endl;
}

void UserCRUDREST::editREST(std::string url) {
    std::cout << "POST: /edit/" << url << std::endl;
}

void UserCRUDREST::removeREST(std::string url) {
    std::cout << "POST: /remove/" << url << std::endl;
}

void UserCRUDREST::readREST(std::string url) {
    std::cout << "GET: /view/" << url << std::endl;
}
