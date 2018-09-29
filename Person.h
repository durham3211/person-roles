//
// Created by User on 9/28/2018.
//
#include <iostream>
#include <string>


using std::string;




#ifndef PERSON_ROLES_PERSON_H
#define PERSON_ROLES_PERSON_H

#include "PersonRole.h"
#include "DefaultRole.h"

class Person {
public:
    explicit Person(string name, PersonRole *role = new DefaultRole())


    virtual string getName(const string &name);
    virtual Person getRole() const;
    void setRole(const Person & role);
    private:
    string m_name;
    PersonRole * m_role = new DefaultRole;
};


#endif //PERSON_ROLES_PERSON_H
