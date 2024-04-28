#include <string>
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

class CodigoPagamento{
 private:
    int codigo;
 public:
    CodigoPagamento(int);
    void setCodigoP(int);
    int getCodigoP();

};


class CodigoTitulo{
    private:
        std::string codigo;
        std::string apoio = "";
    public:
        CodigoTitulo(std::string);
        void setCodigoT(std::string);
        std::string getCodigoT();
};


class CPF{
    private:
        std::string cpf;
        std::string apoio="";
        std::string calcula_ultimos2(std::string);
    public:
        CPF(std::string);
        void setCPF(std::string);
        std::string getCPF();

};


class Data{
    private:
        std::string data;
        int dia;
        int mes;
        int ano;
        void arrumar(std::string);
        bool verifica_dia();
        bool verifica_mes();
        bool verifica_ano_bissexto();
    public:
        void setData(std::string);
        std::string getData();



};

#endif // DOMINIOS_H_INCLUDED
