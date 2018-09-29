//
// Created by User on 9/28/2018.
//
#include <string>



using std::string;

#ifndef PERSON_ROLES_STUDENTROLE_H
#define PERSON_ROLES_STUDENTROLE_H

#include "PersonRole.h"

class StudentRole : public PersonRole {

public:

    string getRoleName() const;    void procrastinate() const;
    void complainTo(Person Teacher);
};


#endif //PERSON_ROLES_STUDENTROLE_H
