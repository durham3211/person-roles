//
// Created by User on 9/28/2018.
//
#include <string>
#include "Person.h"

using std::string;

#ifndef PERSON_ROLES_TEACHERROLE_H
#define PERSON_ROLES_TEACHERROLE_H


class TeacherRole : public Person{
public:

    string getRoleName() const override;
    string drink();
    string respondToComplaintFrom(PersonRole p);
};


#endif //PERSON_ROLES_TEACHERROLE_H
