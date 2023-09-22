// #include <iostream>
// #include "banco.h"
// using std::endl;

// ContaBanco::ContaBanco(double saldo) {
//   if (saldo < 0){
//     creditar(0);
//   }else{
//   creditar(saldo);
//   }
// }

// double ContaBanco::getSaldo() {
//   return saldo;
// }

// void ContaBanco::creditar(double quantia) {
//   if(quantia == 0){
//     saldo = 0;
//   }
//   if(quantia < 0){
//     std::cout<<"\033[1;31mERRO: Não é possivel creditar valores negativos, tente novamente.\033[0m"<<endl;
//   }
//   saldo += quantia;
// }

// void ContaBanco::debitar(double quantia) {
//   if (quantia <= saldo) {
//     saldo -= quantia;
//   } else {
//     std::cout << "\033[1;31mERRO: A tentativa de debito é maior que o saldo da conta, tente novamente.\033[0m" <<endl;
//   }
// }

// void ContaBanco::displaymessage() {
//   std::cout << "Saldo atual: R$" << getSaldo() << ";" << endl;
// }
