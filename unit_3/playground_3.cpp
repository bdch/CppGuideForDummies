//
// Created by Lingling on 20.04.2025.
//
#include <iomanip>
#include <iostream>
#include <map>
#include<vector>

using namespace std;

int main()
{

    string foo;
    getline(cin, foo);
    cout << foo << endl;

    vector<string> v;
    if (v.size() > 2)
    {
        cout << v[2] << endl;
    }

    int keyToCheck = 0;
    map<int, string> m;
    if (m.find(keyToCheck) != m.end())
    {
        cout << m[keyToCheck] << endl;
    }




}