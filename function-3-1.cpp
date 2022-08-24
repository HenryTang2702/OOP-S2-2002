#include<iostream>
int next_match_count(int vals[], int length){
    int count = 0;
    for(int i=1; i<length; i++){   
        if(vals[i] == vals[i-1]){
           count+=1;;
    }
    }
    
    return count;
}