#include<iostream>
#include<string>
#include "Capybara.h"
#include<stdio.h>
#include<iostream>

using namespace std;

Capybara::Capybara(){

}
string Capybara::getName(){
    return name;
}
void Capybara::setName(string capyName){
    name = capyName;
    }   // change the capybara's name

void Capybara::setAge(int capyAge){
    age = capyAge;
}      // change the capybara's age
int Capybara:: getAge(){
    return age;
}
Capybara:: ~Capybara(){
    
}
