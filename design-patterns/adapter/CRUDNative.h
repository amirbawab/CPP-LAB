#ifndef ADAPTER_CRUDNATIVE_H
#define ADAPTER_CRUDNATIVE_H

#include <string>

class CRUDNative {
public:
    virtual void create(int id, std::string firstName, std::string lastName)=0;
    virtual void remove(int id)=0;
    virtual void edit(int id, std::string firstName, std::string lastName)=0;
    virtual void read(int id)=0;
};
#endif //ADAPTER_CRUDNATIVE_H
