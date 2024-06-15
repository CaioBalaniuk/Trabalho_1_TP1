#ifndef TU_ENTIDADES_H_INCLUDED
#define TU_ENTIDADES_H_INCLUDED
#include "dominios.h"
#include "dominios.cpp"
#include "entidades.h"
#include "entidades.cpp"

using namespace std;

//Declaração da classe de testes da entidade Pagamento
class TUPagamento{
private:
    int codigo_valido = 12345678;
    string data_valido = "25-05-2025";
    int percentual_valido = 50;
    string estado_valido = "Liquidado";

    Pagamento* ponteiro_pagamento;

    void inicio();
    void caso_sucesso();
    void fim();

public:
    void run();
};

//Declaração da classe de testes da entidade Conta
class TU_Conta {
private:
    const string VALOR_VALIDO_CPF = "123.456.789-09";
    const string VALOR_VALIDO_NOME = "John Doe";
    const string VALOR_VALIDO_SENHA = "946287";

    Conta *conta;

    void setUp();
    void tearDown();
    void testarSucesso();

public:
    void run();
};


#endif // TU_ENTIDADES_H_INCLUDED
