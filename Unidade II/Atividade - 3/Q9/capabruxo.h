#ifndef CAPABRUXO_H
#define CAPABRUXO_H

#include <string>
using namespace std;

class Capa {
public:
  Capa(int tamanho,string casa);
  //Métodos Set
  void setCasa(string casa);
  //Métodos Get
  inline int getTamanho()const{return Tamanho;};
  inline string getCor()const{return cor;};
  inline string getCasa()const{return casa;};
  //Método de apresentação
  void display()const;

private:
  int Tamanho;
  string cor;
  string casa;
};

#endif