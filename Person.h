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

    string m_name;
    PersonRole * m_role;


    explicit Person(PersonRole * role = new DefaultRole());
    string getName(const string &name);
    string getRole() const;
    void setRole(const PersonRole & role);


};


#endif //PERSON_ROLES_PERSON_H
