#include <iostream>
#include <fstream>

using namespace std;

class Student
{

    string name, fac;
    int age;

public:
    Student() {}
    Student(string name, string fac, int age)
    {
        this->name = name;
        this->fac = fac;
        this->age = age;
    }

    void writeOnFile()
    {
        ofstream out("Student.dat", ios::binary);
        if (!out)
        {
            throw runtime_error("Error opening the file");
        }
        out.write((char *)this, sizeof(this));
        out.close();
    }
};

int main()
{
    Student s("Hari", "BCT", 21);
    try
    {
        s.writeOnFile();
    }
    catch (const runtime_error &e)
    {
        cout << e.what();
    }
    return 0;
}