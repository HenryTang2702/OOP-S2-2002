#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void print_ascending(int *vals, int len)
{
    int previouse = vals[0] - 1;
    for (int i = 0; i < len; i++)
    {
        if (previouse > vals[i])
            break;
        cout << vals[i] << " ";
        previouse = vals[i];
    }
    cout << endl;
}