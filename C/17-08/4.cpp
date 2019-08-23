#include <iostream>
#include <fstream>

using namespace std;
int main(int argc, char const *argv[]) {
  ifstream pf("lab2.txt");
  int a = 0;
  string str;
  while (getline(pf,str)) {

    cout << str;
    a++;
  }
  cout << a;
  return 0;
}
