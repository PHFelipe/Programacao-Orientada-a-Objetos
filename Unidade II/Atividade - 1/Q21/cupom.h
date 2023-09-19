#ifndef cupom_h
#define cupom_h

#include <string>

using std::string;

class cupom{
  public:
    cupom(string id,string descricao,int quantidade,float preco);
    void setID(string id);
    void setDESCR(string descricao);
    void setQTD(int quantidade);
    void setPRC(float preco);
    string getID();
    string getDESCR();
    int getQTD();
    float getPRC();
    float getvalor();
    void displaymessage();
    void calculacupom(int quantidade,int preco);
  
  private:
    string cupomID;
    string cupomDESCR;
    int cupomQTD;
    float cupomPRC;
    float valortotal;
};
#endif