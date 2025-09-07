#include <iostream>
using namespace std;

class MyNumber
{
private:
    int x;

public:
    void input()
    {
        cout << "enter a number: " << endl;
        cin >> x;
    }
    MyNumber() {};

    operator int()
    {
        return x;
    }
};

int main()
{
    MyNumber num;
    num.input();
    int x = num;
    cout << x;
    return 0;
}