#include <iostream>
#include "TU_entidades.h"
#include <stdexcept>

using namespace std;

//Implementação da classe de testes da entidade Pagamento
void TUPagamento::inicio(){
    ponteiro_pagamento = new Pagamento();
}

void TUPagamento::fim(){
    delete ponteiro_pagamento;
}

void TUPagamento::caso_sucesso{
    try{
        ponteiro_pagamento->setPagamento(codigo_valido, data_valido, percentual_valido, estado_valido);
        auto tuplinha = make_tuple(codigo_valido, data_valido, percentual_valido, estado_valido);
        if (ponteiro_pagamento->getPagamento() == tuplinha){
            cout << "Sucesso - Entiddade Pagamento:" << endl;
            cout << "Código de Pagamento: " <<  codigo_valido << endl;
            cout << "Data: " << data_valido << endl;
            cout << "Percentual: " << percentual_valido << endl;
            cout << "Estado: " << estado_valido << endl;
        }
    } catch (const invalid_argument& e) {
        cout << "Falha - Entidade Pagamento";
    }
}

void TUPagamento::run(){
    inicio();
    caso_sucesso();
    fim();
}


//Implementação da classe de testes da entidade Conta
void TU_Conta::setUp() {
    conta = new Conta();
}

void TU_Conta::tearDown() {
    delete conta;
}

void TU_Conta::testarSucesso() {
    try {
        conta->setConta(VALOR_VALIDO_CPF, VALOR_VALIDO_NOME, VALOR_VALIDO_SENHA);
        auto tupla = make_tuple(VALOR_VALIDO_CPF, VALOR_VALIDO_NOME, VALOR_VALIDO_SENHA);
        if (conta->getConta() == tupla){
            cout << "Sucesso - Entidade Conta: " <<endl;
            cout << "CPF: " << VALOR_VALIDO_CPF << endl;
            cout << "Nome: " << VALOR_VALIDO_NOME << endl;
            cout << "Senha: " << VALOR_VALIDO_SENHA << endl;
        }
    }
    catch (invalid_argument &ex) {
        cout << "Falha - Entidade Conta" << endl;
    }
}

void TU_Conta::run() {
    setUp();
    testarSucesso();
    tearDown();
}
