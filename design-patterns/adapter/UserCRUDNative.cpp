#include "UserCRUDNative.h"
#include <iostream>

void UserCRUDNative::create(int id, std::string firstName, std::string lastName) {
    std::cout << "Creating user in the db: " << id << " "
    << firstName << " "
    << lastName << std::endl;
    // Store in DB ..
}

void UserCRUDNative::edit(int id, std::string firstName, std::string lastName) {
    std::cout << "Editing user in the db: " << id << " "
    << firstName << " "
    << lastName << std::endl;
    // Edit in DB ..
}

void UserCRUDNative::remove(int id) {
    std::cout << "Remove user from db: " << id << std::endl;
    // Delete from DB
}

void UserCRUDNative::read(int id) {
    std::cout << "Viewing user info in db: " << id << std::endl;
    // Fetch info from DB
}
