#include<iostream>
#include "Musician.h"

using namespace std;

int main(){
    Musician henry=Musician("Huy", 10);
    cout<<henry.get_instrument()<< " " << henry.get_experience()<<endl;

    return 0;
}