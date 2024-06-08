#ifndef TU_DOMINIOS_H_INCLUDED
#define TU_DOMINIOS_H_INCLUDED
#include "dominios.h"
#include <vector>


using namespace std;

//Classe teste de unidade codigo pagamento
class TU_CodigoP {
private:
    const static int VALOR_VALIDO = 50124789;
    const static int VALOR_INVALIDO = 4512300;
    CodigoPagamento codigo;
    void caso_sucesso();
    void caso_falha();
public:
    void run();
};

//Declaração da Classe de Teste para o Codigo Titulo
class TU_CodigoT {
private:
    const string VALOR_VALIDO = "CDB12039875";
    const string VALOR_INVALIDO = "LKC44222588";
    CodigoTitulo codigo;
    void casos_sucesso();
    void casos_falha();
public:
    void runn();
};

//Declaração da Classe de Teste para CPF;
class TU_CPF {
private:
    const string VALOR_VALIDO = "123.456.789-09";
    const string VALOR_INVALIDO = "123.456.789-11";
    CPF cpf;
    void caso_sucesso();
    void caso_falha();
public:
    void run();
};

//Declaração da Classe de Teste para Data;
class TU_DATA {
private:
    const string VALOR_VALIDO = "29-02-2024";
    const string VALOR_INVALIDO = "31-04-2099";
    Data* data;
    void caso_sucesso();
    void caso_falha();
    void start();
    void fim();
public:
    void run();

};


//Declaração da Classe de Teste para o Percentual
class TUPercentual{
private:
    const static int valido = 50;
    const static int invalido = 150;

    Percentual* ponteiro_percentual;

    bool estado;

    void inicio();
    void caso_sucesso();
    void caso_falha();
    void fim();

public:
    const static bool sucesso = true;
    const static bool falha = false;

    void run();
};

//Declaração da Classe de Teste para o Nome
class TUNome{
private:
    const string valido = "Pedro Raul";
    const string invalido = "M0ISES";

    Nome* ponteiro_nome;

    bool estado;

    void inicio();
    void caso_sucesso();
    void caso_falha();
    void fim();

public:
    const static bool sucesso = true;
    const static bool falha = false;

    void run();
};


//Declaração da Classe de Teste para o Senha
class TUSenha{
private:
    const string valido = "738294";
    const string invalido = "123456";

    Senha* ponteiro_senha;

    bool estado;

    void inicio();
    void caso_sucesso();
    void caso_falha();
    void fim();

public:
    const static bool sucesso = true;
    const static bool falha = false;

    void run();
};

#endif // TU_DOMINIOS_H_INCLUDED
