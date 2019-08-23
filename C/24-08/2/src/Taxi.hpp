#ifndef _TAXI_HPP
#define _TAXI_HPP
#include <string>

using namespace std;

class Taxi{
  public:
    string modelo_do_carro;
    string motorizacao_do_carro;
    string fabricante_do_veiculo;
    string nome_do_motorista;
    float quilometragem_inicial;
    float quilometragem_final;


    //SETS
    void setModelodoCarro(string modelo_do_carro);
    void setMotorizacaoDoCarro(string motorizacao_do_carro);
    void setFabricanteDoVeiculo(string fabricante_do_veiculo);
    void setNomeDoMotorista(string nome_do_motorista);
    void setQuilometragemInicial(float quilometragem_inicial);
    void setQuilometragemFinal(float quilometragem_final);

    //GETS
    string getModelodoCarro();
    string getMotorizacaoDoCarro();
    string getFabricanteDoVeiculo();
    string getNomeDoMotorista();
    float getQuilometragemInicial();
    float getQuilometragemFinal();

    float valorDaCorrida();

};



#endif
