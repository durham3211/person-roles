//
// Created by User on 9/28/2018.
//

using std::cout;
using std::endl;

#include "PersonRole.h"

class Person : public PersonRole{
public:
    explicit Person(std::string name, PersonRole role = DefaultRole{});
    std::string getName(const std::string &name);
    PersonRole getRole() const =;
    void setRole(cons PersonalRole & role);

};

#ifndef PERSON_ROLES_PERSON_H
#define PERSON_ROLES_PERSON_H

#endif //PERSON_ROLES_PERSON_H
