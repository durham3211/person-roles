//
// Created by User on 9/28/2018.
//

#ifndef PERSON_ROLES_DEFAULTROLE_H
#define PERSON_ROLES_DEFAULTROLE_H
#include "PersonRole.h"
#include <string>

class DefaultRole : public PersonRole{
public:

    PersonRole* getRoleName() override;
};

#endif //PERSON_ROLES_DEFAULTROLE_H
