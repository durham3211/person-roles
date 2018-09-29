//
// Created by User on 9/28/2018.
//
#include <iostream>
#include <string>
#include <cstdlib>


using std::string;

#include "PersonRole.h"
#include "DefaultRole.h"

#ifndef PERSON_ROLES_PERSON_H
#define PERSON_ROLES_PERSON_H

class Person : public PersonRole{
public:
    explicit Person(string name, PersonRole role = DefaultRole);
    virtual string getName(const string &name);
    virtual Person getRole() const;
    void setRole(const PersonRole & role);

};


#endif //PERSON_ROLES_PERSON_H
