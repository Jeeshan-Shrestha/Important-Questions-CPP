// basic to class conversion we generally use Single Arg Constructor

#include <iostream>
using namespace std;

class MyInteger
{
private:
    int x;

public:
    MyInteger(int x)
    {
        this->x = x;
    }

    void show()
    {
        cout << x;
    }
};

int main()
{
    int x = 10;

    MyInteger num = x;

    num.show();

    return 0;
}