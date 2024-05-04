#include <string>
#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <vector>

using namespace std;

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

//Classe Percentual
class Percentual{
private:
    int percentual;
public:
    Percentual(int d=0);
    void setPercentual(int a);
    int getPercentual() const;
};

//Classe Senha
class Senha{
private:
    string senha;
    bool verificador_duplica(const string& password);
    bool verificador_ordem(const string& password);
public:
    Senha(string d=" ");
    void setSenha(const string& a);
    string getSenha();
};

//Classe Nome
class Nome{
private:
    string nome;
    bool verificador_caracteres(const string& name);
    bool verificador_letras(const string& name);
    bool verificador_maiusculo(const string& name);
    vector<string> separador_strings(const string& name);

public:
    Nome(string m=" ");
    void setNome(const string& a);
    string getNome();
};

#endif // DOMINIOS_H_INCLUDED
