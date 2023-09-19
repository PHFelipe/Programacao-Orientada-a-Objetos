// #include <iostream>
// #include "retangulo.h"

// using namespace std;

// Retangulo::Retangulo(double altura, double largura){
//   setAltura(altura);
//   setLargura(largura);
// }

// void Retangulo::setLargura(double largura){
//   if(largura>=0.0 && largura <=20.0){
//     RetanguloLargura = largura;
//   }else{
//     RetanguloLargura = 1.0;
//   }
// }

// void Retangulo::setAltura(double altura){
//   if(altura>=0.0 && altura <=20.0){
//     RetanguloAltura = altura;
//   }else{
//     RetanguloAltura = 1.0;
//   }
// }

// double Retangulo::getAltura() const {
//   return RetanguloAltura;
// }

// double Retangulo::getLargura() const {
//   return RetanguloLargura;
// }

// double Retangulo::calcularPerimetro() const {
//   return 2 * (getAltura()+ getLargura());
// }

// double Retangulo::calcularArea() const {
//   return (getAltura() * getLargura());
// }

// void Retangulo::desenhar() const {
//   for (int i = 0; i <= getAltura() + 1; i++) {
//     for (int j = 0; j <= getLargura(); j++) {
//       if ((i == 0 && j == 0)||(i == getAltura() + 1 && j == 0)) {
//           cout << "+ ";
//       }else if((i == 0 && j == getLargura())||(i == getAltura() + 1 && j ==
//       getLargura())){
//         cout<< "- +";
//       } else if ((i == 0 && j >= 0) || (i == getAltura() + 1 && j >= 0)) {
//           cout << "- ";
//       } else if ((i > 0 && j == 0)){
//           cout << "|";
//       }else if(i>0 && j == getLargura()){
//         cout<<"   |";
//       }else {
//           cout << "  ";
//       }
//     }
//     cout << endl;
//   }
//   cout<<"Retangulo: "<<getAltura()<<" X "<<getLargura()<<endl;
//   cout<<"Perímetro: "<<calcularPerimetro()<<";"<<endl;
//   cout<<"Área: "<<calcularArea()<<";"<<endl;
//   cout<<endl;
// }
