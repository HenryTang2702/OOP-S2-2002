#include "hunter.h"
#include <iostream>
#include<string.h>
#include"animal.cpp"

using namespace std;
int hunter ::nextID = 1000;

// Define the constructor.
hunter ::hunter(string n, int v) : animal(n, v)
{

    kills = 0;
    nextID++;
    animalID = nextID;
}

// Define the member functions.
int hunter :: get_kill()
{

    return kills;
}
void hunter :: set_kill(int k)
{

    kills = k;
}

string hunter :: get_name() 
{
    return "Hunter" + name;
}