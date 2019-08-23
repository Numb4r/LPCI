#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  double a = 0,b = 0;
  int esc = 0;
  cin >> a >> b ;
  cout << "\n1.Media\n2.Diferenca\n3.Produto\n4.Divisao"<<endl;

  cin >> esc;
  cout << "\n";
  switch (esc) {
    case 1:
      cout << (a+b)/2 << endl;
      break;
    case 2:
      cout << a - b << endl;
      break;
    case 3:
      cout << a * b << endl;
      break;
    case 4:
      cout << a/ b << endl;
      break;
    default :
      cout << "Entre com um numero valido" << "\n" << "Saindo" << endl;
      exit(-1);
  }


  return 0;
}
