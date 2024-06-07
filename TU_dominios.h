#ifndef TU_DOMINIOS_H_INCLUDED
#define TU_DOMINIOS_H_INCLUDED
#include "dominios.h"


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
    const static bool SUCESSO = true;
    const static bool FALHA = false;
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
    const string static valido = "Pedro Raul";
    const string static invalido = "MOISES";

    Nome* ponteiro_nome;

    bool estado;

    void incio();
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
    const string static valido = "738294";
    const string static invalido = "123456";

    Senha* ponteiro_senha;

    bool estado;

    void incio();
    void caso_sucesso();
    void caso_falha();
    void fim();

public:
    const static bool sucesso = true;
    const static bool falha = false;

    void run();
};

#endif // TU_DOMINIOS_H_INCLUDED
