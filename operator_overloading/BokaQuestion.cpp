/*Q2. WAP to create a class LandMeasure that reads Ropani, Ana, Paisa and
Dam as data members. Write a friend function to pass two objects of type
LandMeasure and return their sum.
(16 Ana = 1 Ropani, 4 Paisa = 1 Ana, 4 Dam = 1 Paisa)*/

#include <iostream>

using namespace std;

class LandMeasure
{
private:
    int Ropani, Ana, Paisa, Dam;

public:
    LandMeasure() {}
    LandMeasure(int Ropani, int Ana, int Paisa, int Dam)
    {
        this->Ropani = Ropani;
        this->Ana = Ana;
        this->Paisa = Paisa;
        this->Dam = Dam;
    }

    friend LandMeasure AddNepaliPaisa(LandMeasure, LandMeasure);

    void display()
    {
        cout << "Ropani: " << Ropani << endl
             << "Ana: " << Ana << endl
             << "Paisa: " << Paisa << endl
             << "Dam: " << Dam << endl;
    }
};

LandMeasure AddNepaliPaisa(LandMeasure l1, LandMeasure l2)
{
    LandMeasure l;
    l.Dam = l1.Dam + l2.Dam;
    l.Paisa = l1.Paisa + l2.Paisa + l.Dam / 4;
    l.Dam %= 4;
    l.Ana = l1.Ana + l2.Ana + l.Paisa / 4;
    l.Paisa %= 4;
    l.Ropani = l1.Ropani + l2.Ropani + l.Ana / 16;
    return l;
}

int main()
{
    LandMeasure l1(2, 3, 4, 6), l2(23, 4, 3, 5);
    LandMeasure l = AddNepaliPaisa(l1, l2);
    l.display();
    return 0;
}