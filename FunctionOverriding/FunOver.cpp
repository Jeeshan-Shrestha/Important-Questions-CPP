#include <iostream>

using namespace std;

class Hari
{
public:
    static void dance()
    {
        cout << "Hari dances" << endl;
    }
};

class Pranay : public Hari
{
public:
    static void dance()
    {
        cout << "Pranay Dances" << endl;
    }
};

int main()
{
    Hari::dance();
    Pranay::dance();
    Pranay p;
    p.dance();
    p.Hari::dance();
    return 0;
}