#ifndef agenda_h
#define agenda_h

#include "pessoa.h"
#include <string>
using namespace std;

class Agenda {
public:
  Agenda(int tPessoas = 1);
  ~Agenda();
  void armazenaPessoa(const string &nome, int idade, float altura);
  void armazenaPessoa(const Pessoa &p);

  void removePessoa(const string &nome);

  int buscaPessoa(const string &nome) const; // informa em que posição da agenda está a pessoa
  void imprimePovo() const; // imprime todos os dados de todas as pessoas da agenda
  void imprimePessoa(int i) const; // imprime os dados da pessoa que está na posição 'i' da agenda
private:
  Pessoa *pessoas;
  int tPessoas;
  int qtdePessoas;
};
#endif