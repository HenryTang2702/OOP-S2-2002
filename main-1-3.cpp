#include<iostream>

using namespace std;
void count_digits(int array[4][4]);

int main(){
     int a[4][4] = {{4,4,3,2},
                   {1,2,3,2},
                   {1,2,3,2}, 
                   {1,2,3,4}};
    count_digits(a);
    return 0;
}