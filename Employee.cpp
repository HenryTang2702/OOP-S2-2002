#include "Employee.h"
#include <iostream>
using namespace std;

Employee ::Employee(int payRate)
{
    this -> payRate = payRate;
}
void Employee::set_payRate(int payRate)
{
    payRate = payRate;
}
int Employee::get_payRate()
{
    return payRate;
}
float Employee::get_energyLevel(){
    return energyLevel;
}

Employee::~Employee()
{
}