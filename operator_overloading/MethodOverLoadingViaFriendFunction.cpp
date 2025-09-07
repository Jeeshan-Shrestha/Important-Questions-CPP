#include <iostream>

using namespace std;

class Test
{
private:
    int count;

public:
    void showCount()
    {
        cout << count << endl;
    }
    friend void operator++(Test &);
};

void operator++(Test &t1)
{
    t1.count++;
}

int main()
{
    Test t;
    t.showCount();
    ++t;
    t.showCount();
    return 0;
}