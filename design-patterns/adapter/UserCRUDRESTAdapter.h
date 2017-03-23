#ifndef ADAPTER_USERRESTADAPATER_H
#define ADAPTER_USERRESTADAPATER_H

#include "UserCRUDREST.h"
#include "CRUDNative.h"

class UserCRUDRESTAdapter : public CRUDNative {
private:
    UserCRUDREST* userREST;
public:
    UserCRUDRESTAdapter(UserCRUDREST* userREST) : userREST(userREST){}
    void create(int id, std::string firstName, std::string lastName);
    void remove(int id);
    void edit(int id, std::string firstName, std::string lastName);
    void read(int id);
};


#endif
