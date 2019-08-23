#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[]) {
  double a = 0 , b = 0,c = 0;
  cin >> a >> b >> c;
  cout << "1 > "<< (a > 0 ? sqrt(a) : pow(a,2)) << endl;
  cout << "2 > " << ((b > 10 && b < 100) ? "Numero entre 10 e 100,intervalo permitido" : "intervalo nao permitido")<< endl;
  cout << "3 > " << (c < b ? b-c : c + b) << endl;
  return 0;
}
