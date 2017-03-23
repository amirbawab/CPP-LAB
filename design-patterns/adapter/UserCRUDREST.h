#ifndef ADAPTER_USERREST_H
#define ADAPTER_USERREST_H

#include <string>

class UserCRUDREST {
public:
    void createREST(std::string url);
    void editREST(std::string url);
    void removeREST(std::string url);
    void readREST(std::string url);
};


#endif
