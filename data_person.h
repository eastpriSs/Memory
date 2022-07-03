
#include <iostream>
#include <cstdlib>
#include <string>

class DataPerson
{
public:
    DataPerson(const std::string&&);        
    
public:
    std::string pname;
    std::string fname;
    short       Age  ;
    short       IQ   ;  
    int         id   ; 
};