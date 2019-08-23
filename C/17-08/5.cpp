#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
  ifstream pf ("lab2.txt");
  string str;
  while (getline(pf,str)) {
    cout << str<<endl;
  }
  return 0;
}
