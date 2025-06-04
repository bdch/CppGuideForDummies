//
// Created by Lingling on 09.05.2025.
//


#include <iostream>
using namespace std;
#include <vector>
#include <map>

int main() {

    using myType = map<string,vector<string>>::const_iterator;
    typedef map<string,vector<string>>::iterator iterator;

    int& ref = *new int(10); // This is a bad practice, but it works for demonstration purposes.
    auto a = make_tuple(11,'c', true); // type is tuple<int, char, bool>
    auto b = get<1>(a); // b will be 'c'


}
