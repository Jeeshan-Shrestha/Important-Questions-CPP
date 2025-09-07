#include <iostream>

using namespace std;

class Hari
{
private:
    int age;
    string name;

public:
    Hari(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    void print()
    {
        cout << name << endl
             << age;
    }
};

class Pranay
{
private:
    int age;
    string name;

public:
    Pranay(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    operator Hari()
    {
        Hari h1(name, age);
        return h1;
    }
};

int main()
{
    Pranay p("Pranay", 20);
    Hari hari = p;
    hari.print();
    return 0;
}