#include<iostream>
#include<string.h>
#include<string>
#include "Capybara.cpp"
#ifndef WAGON_H
#define WAGON_H

using namespace std;
class Wagon{
public:
    int available_seat;
    Capybara Capybara1,Capybara2, Capybara3, Capybara4;
Wagon();                               
bool addCapybara(Capybara newCapy);    
void emptyWagon();                     
void printCapybaras();                 
                                       
~Wagon();

};                                    
#endif