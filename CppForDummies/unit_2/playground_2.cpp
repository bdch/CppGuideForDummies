#include<string>
#include<vector>
#include<iostream>
using namespace std;

int main() {
  string s(2, 'a');
  cout << s << endl;
  string ss {'2', 'a'};
  cout << ss << endl;

  const vector<int> vs;
  auto it = begin(vs);
}