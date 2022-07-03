#pragma once

#include <iostream>
#include "data_person.h"

namespace personStuff
{
    using std::string;
    
    const string get_name();

} // namespace personStuff


class Person
{

private:
    static Person* _s;

// Методы
public:
    
    static void    change_person(const std::string&&);
    static Person* instance();

    operator=(Person&) = delete;
    Person(Person&)    = delete;    
    Person()           = default;

// Pimpl
public:
    static DataPerson* data_p;
};  
