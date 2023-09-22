#ifndef bruxo_h
#define bruxo_h

#include <string>
#include "capabruxo.h"
#include "varinha.h"
using namespace std;

class bruxo{

public:
  //Construtor padrão
  bruxo(string nome,string feitico);
  //Método set
  void setFeitico(string feitico);
  void setCapa(Capa *capa){bruxoCapa = capa;}
  void setVarinha(Varinha *vara){bruxoVarinha = vara;}
  //Método Get
  inline string getNome() const {return bruxoNome;};
  inline string getFeitico() const {return bruxoFeitico;};
  
  //Apresentações
  void lancarFeitico(string feitico) const;
  void displaymessage() const;

private: 
  string bruxoNome;
  string bruxoFeitico;
  Capa *bruxoCapa;
  Varinha *bruxoVarinha;
};
#endif