#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void print_ascending(int *vals, int len)
{
    int before = vals[0] - 1;
    for (int i = 0; i < len; i++)
    {
        if (before > vals[i])
            break;
        cout << vals[i] << " ";
        before = vals[i];
    }
    cout << endl;
}