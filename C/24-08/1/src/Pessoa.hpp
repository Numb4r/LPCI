#ifndef  _PESSOA_HPP
#define _PESSOA_HPP
#include <string>

using namespace std;

class Pessoa{
  public:
        float peso,altura;
        char sexo;
        string nome;

        //SET
        void setNome(string nome);
        void setPeso(float peso);
        void setAltura(float altura);
        void setSexo(char sexo);
        //GET
        string getNome();
        float getPeso();
        float getAltura();
        char getSexo();

        void imprimir();
};

#endif
