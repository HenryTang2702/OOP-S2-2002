#include<iostream>

int sum_integers(int integers[], int length){
     if (length <= 0){
        return -1;
    }
    int sum =0;
    for(int i =0; i<length; i++){
        sum = sum+ integers[i];

    }
    return sum;
    
}

bool is_array_palindrome(int integers[], int length){
    if (length <= 0){
        return -1;
    }

    int i=0,j=length-1;

    while(i<j){

    if(integers[i] != integers[j]){
        return false;
    }

    i++;

    j--;

    }

    return true;
}


int palindrome_sum(int integers[], int length){
     if (length <= 0){
        return -1;
    }
    if(is_array_palindrome(integers,length)==1){
            return sum_integers(integers, length);
    }   
    else{
         return -2;
      
    }
    

}
