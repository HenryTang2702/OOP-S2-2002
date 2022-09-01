#include<iostream>
#include<string.h>
#include<string>
#ifndef PERSON_H
#define PERSON_H

using namespace std;
class Person{
public:
    int salary;
    string name;
Person();
Person(int mySalary, string myName); // a name and salary must be provided to create a Person
void setName(string myName);         // change the Person's name
string getName();
void setSalary(int mySalary);        // change the Person's salary
int getSalary();
};
#endif 