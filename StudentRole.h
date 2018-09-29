//
// Created by User on 9/28/2018.
//
#include <string>



using std::string;

#ifndef PERSON_ROLES_STUDENTROLE_H
#define PERSON_ROLES_STUDENTROLE_H

#include "Person.h"

class StudentRole : public Person {

public:

    std::string getRoleName() const override;
    void procrastinate() const;
    void complainTo(Person Teacher);
};

class StudentRole {

};


#endif //PERSON_ROLES_STUDENTROLE_H
