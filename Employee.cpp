#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(int payRate) : payRate(payRate)
{
}

void Employee::takeABreak(int mins)
{
    energyLevel += 2 * mins;
    if (energyLevel > 100)
        energyLevel = 100;
}

int Employee::get_payRate()
{
    return payRate;
}

void Employee::set_payRate(int payRate)
{
    this->payRate = payRate;
}

float Employee::get_energyLevel()
{
    return energyLevel;
}

void Employee::set_energyLevel(float energyLevel)
{
    this->energyLevel = energyLevel;
}