#ifndef VARINHA_H
#define VARINHA_H

#include <string>

using namespace std;

class Varinha {
public:
  //Construtor padrão
  Varinha(string tipo,string nucleo,int comprimento): TipoMadeira(tipo), Nucleo(nucleo),Comprimento(comprimento){}

  //Funções get
  string getTipoMadeira() const;
  string getNucleo() const;
  int getComprimento() const;

  //Apresentação da varinha
  void display() const;

private:
  string TipoMadeira;
  string Nucleo;
  int Comprimento;
};
#endif