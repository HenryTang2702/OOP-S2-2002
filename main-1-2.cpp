#include<iostream>

using namespace std;
extern int is_identity(int array[10][10]);

int main(){
    int a[10][10] = {
                     {1,0,0,0,0,0,0,0,0,0},
                     {0,1,0,0,0,0,0,0,0,0},
                     {0,0,1,0,0,0,0,0,0,0},
                     {0,0,0,1,0,0,0,0,0,0},
                     {0,0,0,0,1,0,0,0,0,0},
                     {0,0,0,0,0,1,0,0,0,0},
                     {0,0,0,0,0,0,1,0,0,0},
                     {0,0,0,0,0,0,0,1,0,0},
                     {0,0,0,0,0,0,0,0,1,0},
                     {0,0,0,0,0,0,0,0,0,1}
                };

    cout<<is_identity(a)<<endl;
    return 0;
}