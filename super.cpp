#include <iostream>
#include <string>

using namespace std;
class Super
{
public:
    void f()
    {
        cout << "f";
    }
    void f(int i)
    {
        cout << "f" << i;
    }
};
class Sub : public Super
{
public:
    void f(int i)
    {
        cout << "bla";
    }
};

int main()
{
    Sub s;
    s.f(3);
    s.Super::f();
    return 0;
}