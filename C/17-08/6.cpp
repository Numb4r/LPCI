#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
  ofstream pf("lab2.txt");
  string str;
  cin >> str;
  pf << str;
  
  return 0;
}
