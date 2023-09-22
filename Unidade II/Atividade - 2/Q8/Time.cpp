#include <iostream>
using std::cout;
using std::endl;

//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
using std::setfill;
using std::setw;

#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}

void Time::tick(){
  if(getHour() == 23 && getMinute() == 59 && getSecond() == 59){//Dia
  seguinte
    setHour(0);
    setMinute(0);
    setSecond(0);
  }else if(getMinute() == 59 && getSecond() == 59){//Hora seguinte
    int hora = getHour() + 1;
    setHour(hora);
    setMinute(0);
    setSecond(0);
  }else if(getSecond() == 59){//Minuto seguinte
    int minuto = getMinute() + 1;
    setMinute(minuto);
    setSecond(0);
  }else{
    int segundo = getSecond() + 1;
    setSecond(segundo);
  }
}
void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

void Time::printStandard()
{
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":"
  << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond()
  << (getHour() < 12 ? " AM" : " PM") << endl;
}
