#include<iostream>
void print_ascending(int *vals, int len){

    for(int i =0; i < len; i++){
        if(vals[i -1] < vals[i]){
            vals[i-1] = vals[i];
            std::cout<<vals[i]<<" ";
        }
    }
}