// #include <iostream>
// #include <cctype>

// #include "bruxo.h"
// #include "capabruxo.h"
// #include "varinha.h"
  
// using namespace std;

// bruxo::bruxo(string const nome, string feitico):bruxoNome(nome),bruxoFeitico(feitico),bruxoCapa(nullptr),bruxoVarinha(nullptr){}

// void bruxo::setFeitico(string feitico){
//   if (feitico == "")
//     feitico = "Undefined";
//   bruxoFeitico = feitico;
// }

// void bruxo::lancarFeitico(string feitico) const {
//   cout << "\033[1;33mLançando feitiço " << feitico << " cuidado!!\033[0m" << endl;
// }

// void bruxo::displaymessage() const {
//   //Nome do Bruxo
//   cout<<"Eu sou o Bruxo \033[1m"<<getNome()<<"\033[0m"<<endl;
//   //Casa do Bruxo
//   if(bruxoCapa){
//     cout<<"Sou da casa ";
//     if(bruxoCapa->getCor() == "vermelho"){
//       cout<<"\033[1;31m"<<bruxoCapa->getCasa()<<"\033[0m"<<endl;
//     }else if(bruxoCapa->getCor() =="verde"){
//       cout<<"\033[1;32m"<<bruxoCapa->getCasa()<<"\033[0m"<<endl;
//     }else if(bruxoCapa->getCor() == "azul"){
//       cout<<"\033[1;34m"<<bruxoCapa->getCasa()<<"\033[0m"<<endl;
//     }else if(bruxoCapa->getCor() == "amarelo"){
//       cout<<"\033[1;33m"<<bruxoCapa->getCasa()<<"\033[0m"<<endl;
//     }
//   }else{
//     cout<<"Eu ainda nao possuo casa definida, necessito usar o chapeu seletor"<<endl;
//   }
//   //Varinha do Bruxo
//   if(bruxoVarinha){
//     cout<<"E minha varinha é feita de madeira de "<<bruxoVarinha->getTipoMadeira()<<" com núcleo de "<<bruxoVarinha->getNucleo()<<" e tamanho de "<<bruxoVarinha->getComprimento()<<"Cm"<<endl;
//   }else{
//     cout<<"Ainda nao possuo varinha :("<<endl;
//   }
// }
