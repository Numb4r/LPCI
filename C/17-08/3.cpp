#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[]) {
  ifstream pf("lab2.txt");
  if(!pf)
    cout << "Arquivo nao aberto"<< endl;
    else
    cout << "Arquivo aberto" << endl;
  return 0;
}
