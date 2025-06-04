//
// Created by Lingling on 25.05.2025.
//
#include <iostream>
#include <memory>
using namespace std;




int foo();

int foo()
{
    throw "An error occurred";
    cout << foo() << endl;
    throw int(1);
}

class Date {

    Date(int year, int month, int day)
    {
        this->year = year;
        this->month = month;
        this->day = day;
    }

    int year;
    int month;
    int day;
};


int main()
{

    Date d (2, 3, 4);


}
