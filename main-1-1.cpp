#include<iostream>

using namespace std;
int sum_diagonal(int array[4][4]);

int main(){
    int a[4][4] = {{1,2,3,2},
                   {1,2,3,2},
                   {1,2,3,2}, 
                   {1,2,3,4}};
    cout<< sum_diagonal(a)<<endl;



    return 0;
}