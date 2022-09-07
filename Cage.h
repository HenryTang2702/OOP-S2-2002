#include<iostream>
#include<string>
#ifndef CAGE_H
#define CAGE_H
using namespace std;

class Cage
{
    private:
    std::string name;
    int num;
public:
    Cage();
    Cage(std::string newName, int newNumber); // a constructor that takes the ID number and occupant name
    std::string get_name();                   // returns the name of the cage occupant
    int get_IDnum();                          // returns the cage's ID number
    ~Cage();
};

#endif