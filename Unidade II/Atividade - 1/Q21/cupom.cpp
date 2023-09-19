#include "cupom.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::endl,std::cout;

cupom::cupom(string id,string descricao,int quantidade,float preco){
  setID(id);
  setDESCR(descricao);
  setQTD(quantidade);
  setPRC(preco);
  calculacupom(quantidade,preco);
}

void cupom::calculacupom(int quantidade,int preco){
  if(quantidade >=0 && preco >=0){
    valortotal += (quantidade * preco);
  }
}

void cupom::setID(string id){
  if(id == ""){
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    const std::string caracteres ="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%ˆ&*";

    for (int i = 0; i < 6; ++i) {
        int indice = std::rand() % caracteres.size();
        id += caracteres[indice];
    }
    cupomID = id;
    
  }else{
    cupomID = id;
  }
}

void cupom::displaymessage(){
  cout<<"-------------------------"<<endl;
  cout<<"ID: "<<getID()<<endl<<"Descrição: "<<getDESCR()<<endl<<"Quantidade: "<<getQTD()<<endl<<"Preço: R$"<<getPRC()<<endl;
  cout<<"-------------------------"<<endl;
}

void cupom::setDESCR(string descricao){
  if(descricao == ""){
    cupomDESCR = "NULL";
  }else{
    cupomDESCR = descricao;
  }
}

void cupom::setQTD(int quantidade){
  if(quantidade<0){
    cupomQTD = 0;
  }else{
    cupomQTD = quantidade;
  }
}

void cupom::setPRC(float preco){
  if(preco<0){
    cupomPRC=0;
  }else{
    cupomPRC = preco;
  }
}

string cupom::getID(){
  return cupomID;
}

string cupom::getDESCR(){
  return cupomDESCR;
}

int cupom::getQTD(){
  return cupomQTD;
}

float cupom::getPRC(){
  return cupomPRC;
}

float cupom::getvalor(){
  return valortotal;
}