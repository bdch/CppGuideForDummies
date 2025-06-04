#include<string>
#include<vector>
#include<iostream>

#include "Solution.h"
using namespace std;

ostream operator<<(const ostream& lhs, const type_info& rhs);

int main()
{
    const int x = 5;
    int y;
    cout << "Enter an integer: ";
    cin >> y;
    const int z = y + x;
    cout << z << endl;
}
