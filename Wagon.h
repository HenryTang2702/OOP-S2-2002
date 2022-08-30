#include<iostream>
#include<string.h>
#include<string>

using namespace std;
Wagon();                               // create an empty wagonobject
bool addCapybara(Capybara newCapy);    // adds a Capybara to the wagon, returns false if full
void emptyWagon();                     // remove all Capybaras from the wagon
void printCapybaras();                 // print the name, a space, the age, then a new line
                                       // for each capybara in the order they were added