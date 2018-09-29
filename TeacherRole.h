//
// Created by User on 9/28/2018.
//
#include <string>
#include <cstdlib>


using std::string;

#ifndef PERSON_ROLES_TEACHERROLE_H
#define PERSON_ROLES_TEACHERROLE_H


class TeacherRole {
public:

    string getRoleName() const override;
    string drink();
    string respondToComplaintFrom(Personp);
};


#endif //PERSON_ROLES_TEACHERROLE_H
