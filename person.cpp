
#include "person.h"

// Person

Person* Person::_s          = nullptr;
DataPerson* Person::data_p  = nullptr; 

void Person::change_person(const std::string&& type)
{
    data_p = new DataPerson(std::move(type));
}

Person* Person::instance()
{     
    if (data_p == nullptr) data_p = new DataPerson("Adult");
    return _s;        
}

// personStuff

const std::string personStuff::get_name()
{
    return (Person::instance()->data_p->fname + " " +
            Person::instance()->data_p->pname);
}