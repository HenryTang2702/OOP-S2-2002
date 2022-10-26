#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
using namespace std;

#pragma once

class Employee
{
protected:
    int payRate;       // hourly payRate
    float energyLevel; // Initially 100%

public:
    Employee();
    Employee(int payRate);
    void takeABreak(int mins);
    int get_payRate();
    void set_payRate(int payRate);
    float get_energyLevel();
    void work(int mins);
    float pay();
    ~Employee();
};

#endif