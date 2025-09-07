#include <iostream>
using namespace std;

void riskyFunction()
{
    throw runtime_error("Something went wrong!");
}

void wrapperFunction()
{
    try
    {
        riskyFunction();
    }
    catch (...)
    {
        cout << "Caught in wrapperFunction, rethrowing...\n";
        throw; // rethrow the same exception
    }
}

int main()
{
    try
    {
        wrapperFunction();
    }
    catch (const exception &e)
    {
        cout << "Caught in main: " << e.what() << endl;
    }

    return 0;
}
