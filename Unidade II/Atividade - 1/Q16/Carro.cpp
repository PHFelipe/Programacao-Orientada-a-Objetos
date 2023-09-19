// #include <iostream>
// using std::cout, std::endl;

// #include "Carro.h"

// //Implementação

// Carro::Carro(string nome, int ano)
// { //modificação 1
//   setMarca(nome);
//   setAno(ano);
// }

// void Carro::setMarca(string nome)
// { //modificação 2
//   if (nome == "")
//     marca = "\"Sem Marca\"";
//   else if (nome.length() > 10)
//     marca = nome.substr(0,10);
//   else
//     marca = nome;
// }

// string Carro::getMarca()
// {
//   return marca;
// }  

// void Carro::displayMessage()
// {
//   std::cout << "Olá, eu sou um carro da marca " << getMarca() <<" do ano de "<< getAno() << endl;
// }

// void Carro::setAno(int ano)
// {
//   carroano = ano;
// }

// int Carro::getAno(){
//   return carroano;
// }
