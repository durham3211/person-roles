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

    PersonRole* getRoleName() override;
    void procrastinate() const;
    void complainTo(PersonRole *teacher);
};


#endif //PERSON_ROLES_STUDENTROLE_H
