#include <iostream>

using namespace std;

class Human
{
private:
    string name;
    int age;

public:
    Human(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    bool operator>(int x)
    {
        if (age > x)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Human hari("Hari", 20);
    Human hariJr("HariJr", 8);
    if (hari > 18)
    {
        cout << "old enough" << endl;
    }
    else
    {
        cout << "Not old enough" << endl;
    }

    if (hariJr > 18)
    {
        cout << "old enough" << endl;
    }
    else
    {
        cout << "Not old enough" << endl;
    }
    return 0;
}