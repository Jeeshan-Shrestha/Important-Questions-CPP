#include <iostream>
using namespace std;

class A
{
public:
    void dance()
    {
        cout << "dance" << endl;
    }
};

class B
{
public:
    void dance()
    {
        cout << "b dance" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C c;
    c.B::dance();
    return 0;
}
