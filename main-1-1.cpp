#include<iostream>
#include "Cage.h"

using namespace std;

int main() {
    Cage henry = Cage("dog", 12);
    cout<<henry.get_name() << " " << henry.get_IDnum() <<endl;

    return 0;
}