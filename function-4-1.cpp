#include<iostream>

int* matrix_min_max(int **vals,int num_rows, int num_cols){
    int *min_max = new int[2];
    for(int i = 0; i< 2; i++){
        min_max[i] = vals[0][0];
    }
    
    for(int i =0; i < num_rows; i++){
        for(int j =0; j < num_rows; j++){
            vals[i][j] < min_max[0];
            min_max[0]= vals[i][j];
        }
    }

      for(int i =0; i < num_rows; i++){
        for(int j =0; j < num_rows; j++){
            vals[i][j] > min_max[1];
            min_max[0]= vals[i][j];
        }
        

        }
        return min_max;
    }
