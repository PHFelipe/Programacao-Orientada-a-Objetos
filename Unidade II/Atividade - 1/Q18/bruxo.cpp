#include <iostream>
#include <cctype>
#include "bruxo.h"

using std::cout, std::endl;

bruxo::bruxo(string nome, string casa,string feitico){
  setNome(nome);
  setCasa(casa);
  setFeitico(feitico);
}

void bruxo::setNome(string nome) {
  if (nome == "")
    nome = "Undefined";
  bruxoNome = nome;
}

void bruxo::setCasa(string casa) {
 for (char &c : casa) {
    c = tolower(c);
  }
  if (casa != "grifinoria" && casa != "sonserina" && casa != "lufa-lufa" && casa != "corvinal")
    casa = "Vazia";
  bruxoCasa = casa;
}

void bruxo::setFeitico(string feitico) {
  if (feitico == "")
    feitico = "Undefined";
  bruxoFeitico = feitico;
}

string bruxo::getNome() {
  return bruxoNome;
}

string bruxo::getCasa() {
  return bruxoCasa;
}

string bruxo::getFeitico() {
  return bruxoFeitico;
}

void bruxo::lancarFeitico(string feitico) {
  std::cout << "\033[1;33mLançando feitiço " << feitico << " cuidado!!\033[0m" << endl;
}

void bruxo::displaymessage() {
  std::cout << "\033[1;34mBruxo: \033[0m" << getNome() << ";" << endl << "\033[1;34mCasa: \033[0m" << getCasa() << ";" << endl << "\033[1;34mFeitiço Favorito: \033[0m" << getFeitico() << ";" << endl;
}
