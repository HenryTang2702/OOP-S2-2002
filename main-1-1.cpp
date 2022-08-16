#include <iostream>
#include<string.h>
using namespace std;
void string_2d_copy(std::string first[][2], std::string second[][2], int n);
int main()
{
string first[3][2] = { {"One" , "Two"} ,{"Three" ,"Four"} ,{"Five" ,"Six"} };
string second[3][2];
int n=3;
string_2d_copy(first, second, n) ;
return 0;
}