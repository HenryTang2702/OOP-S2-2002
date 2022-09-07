#include <iostream>
#ifndef CLINIC_H
#define CLINIC_H
#include "Cage.h"
using namespace std;
class Clinic
{
    // private:
    //     std::string c_name;
    //     int size;
    //     Cage *cages;

public:
    Clinic();
    Clinic(std::string name, int max_size);

    int get_number_of_cages();

    std::string get_name();
    Cage *get_cages();

    bool add_cage(Cage new_cage);
    ~Clinic();
    std::string name;
    int size;
    Cage *list;
    int index;
};

#endif