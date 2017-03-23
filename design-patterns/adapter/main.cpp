#include <iostream>

#include "UserCRUDNative.h"
#include "UserCRUDREST.h"
#include "UserCRUDRESTAdapter.h"
#include <iostream>
using namespace std;

int main() {
    // Create User CRUD native
    UserCRUDNative* userCRUDNative = new UserCRUDNative();
    userCRUDNative->create(1, "John", "Smith");
    userCRUDNative->edit(1, "John", "Doe");
    userCRUDNative->read(1);
    userCRUDNative->remove(1);
    std::cout << std::endl;

    // Create User CRUD REST
    UserCRUDREST* userCRUDREST = new UserCRUDREST();
    userCRUDREST->createREST("1/john/smith");
    userCRUDREST->editREST("1/john/doe");
    userCRUDREST->readREST("1");
    userCRUDREST->removeREST("1");
    std::cout << std::endl;

    // Create User CRUD REST Adapater
    UserCRUDRESTAdapter* userCRUDRESTAdapter = new UserCRUDRESTAdapter(userCRUDREST);
    userCRUDRESTAdapter->create(1, "John", "Smith");
    userCRUDRESTAdapter->edit(1, "John", "Doe");
    userCRUDRESTAdapter->read(1);
    userCRUDRESTAdapter->remove(1);

    return 0;
}