#include <iostream>
#ifndef CLINIC_H
#define CLINIC_H
#include "Cage.h"
class Clinic
{
public:
    Clinic();
    Clinic(std::string name, int max_size);

    int get_number_of_cages();

    std::string get_name();
    Cage *get_cages();

    bool add_cage(Cage new_cage);
    ~Clinic();

private:
};

#endif