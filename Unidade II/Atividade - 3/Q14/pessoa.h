#ifndef pessoa_h
#define pessoa_h
#include <string>
using namespace std;

class Pessoa{
public:
Pessoa(const string &nome = "Indefinido",const int &anos=0,const double &altura = 0):nome(nome),idade(anos),altura(altura){}
string getNome() const{return nome;}
int getIdade()const{return idade;}
double getAltura()const{return altura;}

private:
  string nome;
  int idade;
  double altura;
};
#endif