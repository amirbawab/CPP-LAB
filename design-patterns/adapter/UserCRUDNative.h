#ifndef ADAPTER_USERCRUDNATIVE_H
#define ADAPTER_USERCRUDNATIVE_H

#include "CRUDNative.h"

class UserCRUDNative : public CRUDNative {
public:
    void create(int id, std::string firstName, std::string lastName);
    void edit(int id, std::string firstName, std::string lastName);
    void remove(int id);
    void read(int id);
};

#endif
