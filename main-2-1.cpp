#include<iostream>

using namespace std;

void multiples_of_seven(int *nums,int length);

int main() {
    int a[5] = {1, 3, 5, 7, 9};
    int *ptr = a;
    int n =5;   
    multiples_of_seven(ptr,n);
    for(int i =0; i< n; i++){

        cout<< a[i]<<endl;
    }
    return 0;
}