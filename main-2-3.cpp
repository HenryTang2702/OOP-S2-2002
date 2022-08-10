#include<iostream>

using namespace std;
int palindrome_sum(int integers[], int length);
bool is_array_palindrome(int integers[], int length);


int main(){
     int a[5] = {1,2,2,2,1};
     cout<< palindrome_sum(a, 5);
     
    return 0;
}