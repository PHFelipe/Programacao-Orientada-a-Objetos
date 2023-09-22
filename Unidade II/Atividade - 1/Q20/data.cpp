#include <iostream>
#include "data.h"

using std::endl,std::cout;

data::data(int dia,int mes,int ano){
  setDia(dia);
  setMes(mes);
  setAno(ano);
}
void data::setDia(int dia){
  if(dia>=1 && dia<=31){
    dataDia = dia;
  }else{
  dataDia = 1;
  }
}

void data::setMes(int mes){
  if(mes>=1 && mes<=12){
    dataMes = mes;
  }else{
  dataMes = 1;
  }
}

void data::setAno(int ano){
  dataAno = ano;
}

int data::getDia(){
  return dataDia;
}

int data::getMes(){
  return dataMes;
}

int data::getAno(){
  return dataAno;
}

void data::mostrarData(){
  cout<<"A data é: "<<getDia()<<"/"<<getMes()<<"/"<<getAno()<<endl;
};