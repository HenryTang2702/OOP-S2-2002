#include<iostream>
using namespace std;

//array to store elements 
string arr[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

string month_lookup(int month){

    string str =" ";

    if(month >= 1 && month <= 12)
        str = arr[month-1];
    //otherwise it is invalid
    else
        str = "invalid month";

    //return
    return str;

}