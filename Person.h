//
// Created by User on 9/28/2018.
//
#include <iostream>
#include <string>
#include <cstdlib>


using std::string;

#include "PersonRole.h"
#include <cstdlib>
#include "DefaultRole.h"

#ifndef PERSON_ROLES_PERSON_H
#define PERSON_ROLES_PERSON_H

class Person : public PersonRole{
public:
    explicit Person(std::string name, Person role = DefaultRole{});
    string getName(const string &name);
    PersonRole getRole() const =;
    void setRole(const PersonRole & role);

};


#endif //PERSON_ROLES_PERSON_H
