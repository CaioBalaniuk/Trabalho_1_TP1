#ifndef TU_ENTIDADES_H_INCLUDED
#define TU_ENTIDADES_H_INCLUDED
#include "entidades.h"
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

//Declaração da classe de testes da entidade Titulo
class TU_Titulo {
private:
    string CODIGO_T_VALIDO = "LCA01455786";
    string NOME_VALIDO = "Giuseppe Camole";
    string SETOR_VALIDO = "Papel e celulose";
    string DATA_EMISSAO_VALIDA = "15-06-2024";
    string DATA_VENCIMENTO_VALIDA = "31-12-2025";
    float VALOR_VALIDO = 999999;
    Titulo* titulo;
    void start();
    void fim();
    void caso_sucesso();
public:
    void run();

};

#endif // TU_ENTIDADES_H_INCLUDED
