#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include"Employee.h"

using namespace std;

#pragma once

class Shop
{
public:
    Shop();
    void addEmployee(Employee *employee); // Adds a employee to the Shop
    Employee **get_employees();           // Returns the array of pointers to the five employee objects
    int get_count();                      // Returns the amount of employees added to the shop
    ~Shop();

private:
    static Shop *createShop(int authority);
    int count;
};

#endif