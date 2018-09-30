//
// Created by User on 9/28/2018.
//

using std::string;

#ifndef PERSON_ROLES_TEACHERROLE_H
#define PERSON_ROLES_TEACHERROLE_H

#include <string>
#include "PersonRole.h"


class TeacherRole : public PersonRole {
public:

    PersonRole* getRoleName();
    string drink();
    void respondToComplaintFrom(PersonRole *student);
};


#endif //PERSON_ROLES_TEACHERROLE_H
