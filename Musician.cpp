#include<iostream>
#include "Musician.h"
#include<string>
#include<string.h>

using namespace std;

Musician::Musician(){
    ins = "";
    exp = 0;
}
Musician::Musician(std::string instrument, int experience){
    ins = instrument;
    exp = experience;
}

std::string Musician:: get_instrument(){
    return ins;
}
int Musician::get_experience(){
    return exp;
}


Musician::~Musician(){}