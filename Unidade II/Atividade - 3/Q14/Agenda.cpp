// #include "Agenda.h"
// #include "pessoa.h"
// #include <iostream>

// using namespace std;

// void Agenda::armazenaPessoa(const string &nome, int idade, float altura) {
//   pessoas[qtdePessoas] = Pessoa(nome, idade, altura);
//   qtdePessoas++;
// }

// void Agenda::armazenaPessoa(const Pessoa &p) {
//   pessoas[qtdePessoas] = p;
//   qtdePessoas++;
// }

// void Agenda::removePessoa(const string &nome) {
//   int index = buscaPessoa(nome);
//   if (index != -1) {
//     for (int i = index; i < qtdePessoas-1; i++) {
//       pessoas[i] = pessoas[i + 1];
//     }
//     qtdePessoas--;
//   }
// }

// int Agenda::buscaPessoa(const string &nome) const {
//   for (int i = 0; i < qtdePessoas; i++) {
//     if (pessoas[i].getNome() == nome) {
//       return i;
//     }
//   }
//   return -1;
// }

// void Agenda::imprimePovo() const{
//   for(int i=0;i<qtdePessoas;i++){
//     cout<<"Nome: "<<pessoas[i].getNome()<<endl<<"Idade: "<<pessoas[i].getIdade()<<endl<<"Altura: "<<pessoas[i].getAltura()<<endl;
//   }
// }

// void Agenda::imprimePessoa(int i) const{
//   cout<<"Nome: "<<pessoas[i].getNome()<<endl<<"Idade: "<<pessoas[i].getIdade()<<endl<<"Altura: "<<pessoas[i].getAltura()<<endl;
// }