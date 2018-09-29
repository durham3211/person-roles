//
// Created by User on 9/28/2018.
//
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

#include "TeacherRole.h"
#include "Person.H"
#include "PersonRole.h"
#include "DefaultRole.h"
#include "StudentRole.h"

int main() {
    Person Jim("Jim", Person{});
    Jim.drink();
    return 0;
};
