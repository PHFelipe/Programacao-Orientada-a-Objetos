#include "varinha.h"
#include <iostream>

using namespace std;

string Varinha:: getTipoMadeira() const{
  return TipoMadeira;
}

string Varinha:: getNucleo() const{
  return Nucleo;
}

int Varinha:: getComprimento() const{
  return Comprimento;
}

void Varinha:: display()const{
  cout<<"Varinha do Bruxo"<<endl<<"Madeira: "<<getTipoMadeira()<<endl<<"Nucleo: "<<getNucleo()<<endl<<"Comprimento: "<<getComprimento()<<"Cm"<<endl;
}