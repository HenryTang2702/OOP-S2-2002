#ifndef CAPYBARA_H
#define CAPYBARA_H
#include<iostream>
#include<string>
class Capybara{
    string name;
    int age;
public:
    Capybara() ;                     // no name or age is required to create a Capybara
    void setName(string capyName);   // change the capybara's name
    string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();
    ~Capybara();
};
#endif