#include <iostream>

using namespace std;
class Base
{
public:
    int lfc() { cout << "Base::lfc() called"; }
    int lfc(int i) { cout << "Base::lfc(int i) called"; }
};
class Derived : public Base
{
public:
    int lfc() { cout << "Derived::lfc() called"; }
};
int main()
{
    Derived d;
    d.lfc(5);
    return 0;
}