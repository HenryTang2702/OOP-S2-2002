#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee()
{
}
Employee ::Employee(int payRate)
{
    payRate = payRate;
}
void Employee::set_payRate(int payRate)
{
    payRate = payRate;
}
int Employee::get_payRate()
{
    return payRate;
}

Employee::~Employee()
{
}