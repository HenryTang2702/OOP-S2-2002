#include<iostream>

void count_digits(int array[4][4]){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 = 0;
    int count_3 = 0;
    int count_4 = 0;
    int count_5 = 0;
    int count_6 = 0;
    int count_7 = 0;
    int count_8 = 0;
    int count_9 = 0;

    for(int i =0; i<4; i++){
        for(int j = 0; j<4; j++){
            switch (array[i][j])
            {
            case 0 :
                count_0++;
                break;
            case 1 :
                count_1++;
                break;
            case 2 :
                count_2++;
                break;
            case 3 :
                count_3++;
                break;
            case 4:
                count_4++;
                break;
            case 5 :
                count_5++;
                break;
            case 6 :
                count_6++;
                break;
            case 7 :
                count_7++;
                break;
            case 8 :
                count_8++;
                break;
            case 9 :
                count_9++;
                break;
            
            default:
                break;
            }
        }
    }
    std::cout << "0:" << count_0<<";1:" <<count_1<<";2:" << count_2<<";3:"<<count_3 << ";4:" << count_4<<";5:" <<count_5<<";6:" 
<< count_6<<";7:"<<count_7 << ";8:" << count_8 <<";9:"<<count_9<<std::endl;
}
