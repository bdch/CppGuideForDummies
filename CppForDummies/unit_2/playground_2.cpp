#include<string>
#include<vector>
#include<iostream>

#include "Solution.h"
using namespace std;

int main()
{
    constexpr int a = 5;
    constexpr int b = 10;
    Solution::fn(a, b);

    Solution::loop();
    Solution::isEven();
}
