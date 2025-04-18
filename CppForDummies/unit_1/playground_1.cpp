#include<iostream>
#include "Namespaces.h"
#include <string>
using namespace std;

int main()
{
    NS1::printHello();
    NS2::printHello();
    cout << "Hello and goobaie" << endl;
    constexpr char str[] = "Hello World";
    cout << str << endl;
    return 0;
}
