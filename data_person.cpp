
#include "data_person.h"
#include "string_data.h"

DataPerson::DataPerson(const std::string&& type)
{
    using StringData::family_names;
    using StringData::person_names;
    
    
    if (type == "Adult")
    {
        fname = family_names[rand() % 3 + 0];
        pname = person_names[rand() % 3 + 0];
        Age   = rand() % 50 + 18;
        IQ    = rand() % 120 + 70;
    }

    // Не зависят от типа
    id    = rand() % 15678222 + 1;
}
