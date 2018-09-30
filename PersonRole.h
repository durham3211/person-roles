//
// Created by User on 9/28/2018.
//

#include <string>
using std::string;
#ifndef PERSON_ROLES_PERSONROLE_H
#define PERSON_ROLES_PERSONROLE_H

class PersonRole {
public:
    virtual PersonRole* getRoleName() =0;
    ~PersonRole() = default;
};

#endif //PERSON_ROLES_PERSONROLE_H
