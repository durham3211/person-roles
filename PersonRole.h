//
// Created by User on 9/28/2018.
//

#include <string>
using std::string;
#ifndef PERSON_ROLES_PERSONROLE_H
#define PERSON_ROLES_PERSONROLE_H

#include "Person.h"

class PersonRole {
public:
    string virtual getRoleName() =0;
};

#endif //PERSON_ROLES_PERSONROLE_H
