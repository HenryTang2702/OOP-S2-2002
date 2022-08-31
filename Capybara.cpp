#include<iostream>
#include<string>
#include"Capybara.h"

using namespace std;

Capybara::Capybara(){}
void Capybara::setName(string capyName){
        name = capyName;
    }   // change the capybara's name
string Capybara:: getName(){
    return name;
}
void Capybara::setAge(int capyAge){
    age = capyAge;
}      // change the capybara's age
int Capybara:: getAge(){
    return age;
}
Capybara:: ~Capybara(){}
