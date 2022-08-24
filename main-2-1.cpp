#include<iostream>

using namespace std;
void hexDigits(int *numbers,int length) ;
int *readNumbers();

int main(){
    int *array;
    array = readNumbers();
    hexDigits(array, 10);


    return 0;
}