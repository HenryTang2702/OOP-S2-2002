#ifndef COMPUTER_H
#define COMPUTER_H
#include<iostream>
#include<string>

using namespace std;

#pragma once

class Computer
{
public:
    Computer();
    Computer(string letter); // set what move the computer will
                             // make (rock, paper, or scissors)
                             // if the input is not r, R, p, P, s, S or
                             // a string starting with one of these letters,
                             // set the move to the default ‘r’

    string getMoves(); // returns all moves stored in a string

    void move(); // increments number of moves made
    ~Computer();

private:
};

#endif