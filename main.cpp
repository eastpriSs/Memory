#include <time.h>
#include <iostream>
#include "person.h"  
#include <Windows.h>

// Script.h
#include <cstdlib>
#include "higher_iq_way.h"

class Script
{

public:

static void start();
static void end();

};

void Script::start()
{
    using std::cout;
    cout << personStuff::get_name()          <<  " NAME" << '\n';
    cout << Person::instance()->data_p->IQ   <<  " IQ"   << '\n';
    cout << Person::instance()->data_p->Age  <<  " AGE"  << '\n'; 

    if ( Person::instance()->data_p->IQ > 120 )
    {
        cout << higher_iq_way::ways[rand() % 3 + 0] << '\n';
    }   
}

void Script::end()
{
    using std::cout;
    cout << "LOG :::  Person " << Person::instance()->data_p->id << " is deleted" << '\n';    
    cout << "Тест";
}

// cd "d:\WORKONIT\cpp_experience\Memory\" ; if ($?) { g++ main.cpp person.cpp data_person.cpp -lgdi32 -fconcepts -o main } ; if ($?) { .\main }


int main()
{
    clock_t tStart = clock();
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    // /*--------------------------------------*/ // Начало работы
    Script::start(); 
    Script::end(); 
    // /*--------------------------------------*/ // Конец работы
    printf("Time taken: %.10fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    getchar();
}


