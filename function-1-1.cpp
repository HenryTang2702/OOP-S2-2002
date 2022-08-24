#include<iostream>
void print_ascending(int *vals, int len){

     for (int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            if (vals[i] > vals[j+1]){
                int temp = vals[i];
                vals[i] = vals[j+1];
                vals[j+1] = temp;
            }
        }
        
    }
    for(int i =0; i < len; i++){
        std::cout<<vals[i]<<" ";
    }
    // for(int i =1; i < len; i++){
    //     if(vals[i -1] < vals[i]){
    //     std::cout<<vals[i-1]<<" ";
    //     }
    //     else{
    //         std::cout<<"";
    //     }
        
    // }
}