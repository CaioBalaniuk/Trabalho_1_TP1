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



#endif // TU_ENTIDADES_H_INCLUDED
