cmake_minimum_required(VERSION 3.12)
project(person_roles)

set(CMAKE_CXX_STANDARD 17)

add_executable(person_roles Person.h PersonRole.h StudentRole.cpp StudentRole.h TeacherRole.cpp TeacherRole.h main.cpp DefaultRole.h)