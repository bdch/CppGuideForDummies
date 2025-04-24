//
// Created by Lingling on 19.04.2025.
//

#include "Solution.h"
#include <iostream>
#include <string>
using namespace std;


void Solution::fn(const int a, const int b)
{
    const int addResult = a + b;
    const int subResult = a - b;
    const int mulResult = a * b;
    const int divResult = a / b;
    const int modResult = a % b;
    cout << "Addition: " << addResult << endl;
    cout << "Subtraction: " << subResult << endl;
    cout << "Multiplication: " << mulResult << endl;
    cout << "Division: " << divResult << endl;
    cout << "Modulus: " << modResult << endl;
    cout << "Bitwise AND: " << (a & b) << endl;
}

void Solution::loop()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i;
    }
    int j = 1;
    while (j <= 5)
    {
        cout << j << endl;
        j++;
    }
    do
    {
        cout << j << endl;
        j++;
    }
    while (j <= 5);
}

void Solution::isEven()
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " is even" << endl;
        }
        else
        {
            cout << i << " is odd" << endl;
        }
    }
    {
    }
}
