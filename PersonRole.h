//
// Created by User on 9/28/2018.
//
#include <cstdlib>


using std::string;
#ifndef PERSON_ROLES_PERSONROLE_H
#define PERSON_ROLES_PERSONROLE_H

class PersonRole {
public:
    virtual string getRoleName() const = 0;
};

#endif //PERSON_ROLES_PERSONROLE_H
