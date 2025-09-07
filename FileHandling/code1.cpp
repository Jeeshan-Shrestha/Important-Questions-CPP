#include <iostream>
#include <fstream>
using namespace std;

class Student
{

    string name, faculty;
    int age;

public:
    Student() {}
    Student(string name, string faculty, int age)
    {
        this->name = name;
        this->faculty = faculty;
        this->age = age;
    }

    void writeOnFile()
    {
        ofstream out("student.tx");
        if (!out)
        {
            throw runtime_error("file not opening");
        }
        out << name << " " << faculty << " " << age << endl;
        out.close();
    }

    void readFromFile()
    {
        ifstream in("student.aaaa");
        if (!in)
        {
            throw runtime_error("file not found");
        }
        in >> name >> faculty >> age;
        cout << name << " " << faculty << " " << age << endl;
    }
};

int main()
{
    try
    {
        Student s("Hari", "Cs", 21);
        s.readFromFile();
        return 0;
    }
    catch (runtime_error e)
    {
        cout << "caught a exception  " << e.what();
    }
}