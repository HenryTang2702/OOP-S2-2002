#ifndef HUNTER_H
#define HUNTER_H
#include <iostream>
#include "animal.h"
using namespace std;

#pragma once

class hunter : public animal

{
private:
    // Declare the member variables.
    int kills;
    static int nextID;

public:
    // Declare the constructor.
    hunter(string n, int v);

    // Declare the member functions.
    string get_name();
    int get_kill();
    void set_kill(int k);
};
#endif