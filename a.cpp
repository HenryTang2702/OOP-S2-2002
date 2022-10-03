#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Nhap(int &a, int &b)
{
    do
    {
        system("cls");
        cout << "Hay nhap so a:";
        cin >> a;
        cout << "Hay nhap so b:";
        cin >> b;
    } while ((a < 100 || a > 999) && (b < 100 || b > 999));
}
void PhepNhan(int a, int b)
{
    int c = b % 10;
    int d = ((b - c) / 10) % 10;
    int e = b / 100;
    cout << " " << a * c << endl;
    cout << " " << a * d << endl;
    cout << " " << a * e << endl;
    int tong = a * c + a * d * 10 + a * e * 100;
    cout << " " << tong;
}
int main()
{
    int a, b;
    Nhap(a, b);
    cout << " " << a << "\n";
    cout << " x\n";
    cout << " " << b;
    cout << endl;
    cout << " __________";
    cout << endl;
    PhepNhan(a, b);
    return 0;
}