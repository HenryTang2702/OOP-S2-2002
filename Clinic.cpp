// #include "Clinic.h"
// #include "Cage.h"
// #include<iostream>
// #include<string>

// Clinic::Clinic()
// {
//     size =0;
//     index =0;

// }
// Clinic::Clinic(std::string name, int max_size){
//     c_name = name;
//     size = max_size;
//     index =0;
//     cages =new
// }

// Clinic::~Clinic()
// {
// }
#include <iostream>
#include "Clinic.h"
using namespace std;

Clinic::Clinic()
{
}
Clinic::Clinic(string name, int max_size)
{
    this->name = name;
    list = new Cage[max_size];
    index = 0;
}

int Clinic::get_number_of_cages()
{
    return size;
}

std::string Clinic::get_name()
{
    return name;
}
Cage *Clinic::get_cages()
{
    return list;
}

bool Clinic::add_cage(Cage new_cage)
{
    if (index < size)
    {
        list[index] = new_cage;
        index++;
        return true;
    }
    else
    {
        cout << "Full" << endl;
        return false;
    }
}

Clinic::~Clinic()
{
}