#include "Airplane.h"
#include "Person.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

// #pragma once
Airplane::Airplane(){};
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot)
{
    this->callsign = callsign;
    pilot = thePilot;
    coPilot = theCoPilot;
}

void Airplane::setPilot(Person thePilot)
{
    pilot = thePilot;
}

Person Airplane::getPilot()
{
    return pilot;
}

void Airplane::setCoPilot(Person theCoPilot)
{
    coPilot = theCoPilot;
}

Person Airplane::getCoPilot()
{
    return coPilot;
}

void Airplane::printDetails()
{
    cout << callsign << endl
         << pilot.getName() << endl
         << coPilot.getName() << endl;
}