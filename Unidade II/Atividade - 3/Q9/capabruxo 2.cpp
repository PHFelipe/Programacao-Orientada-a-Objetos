// #include "capabruxo.h"
// #include <iostream>

// using namespace std;

// //Construtor padrão com inicialiazação de membro
// Capa::Capa(int tamanho,string casa):Tamanho(tamanho){
//   setCasa(casa);
// }

// void Capa::setCasa(string casa) {
//   //Transformando as letras em minusculo
//   for (int i = 0; i < casa.length(); i++) {
//     if (casa != "-") {
//       casa[i] = tolower(casa[i]);
//     }
//   }
//   //Verificação de casas
//   if (casa == "grifinoria") {
//     this->cor = "vermelho";
//     this->casa = casa;
//   } else if (casa == "sonserina") {
//     this->cor = "verde";
//     this->casa = casa;
//   } else if (casa == "corvinal") {
//     this->cor = "azul";
//     this->casa = casa;
//   } else if (casa == "lufa-lufa") {
//     this->cor = "amarelo";
//     this->casa = casa;
//   } else {
//     this->cor = "INDEFINIDO";
//     this->casa = "INDEFINIDO";
//   }
// }

// void Capa::display()const{
//   cout<<"Casa: "<<getCasa()<<endl<<"Cor: "<<getCor()<<endl<<"Tamanho: "<<getTamanho()<<" Cm"<<endl;
// }