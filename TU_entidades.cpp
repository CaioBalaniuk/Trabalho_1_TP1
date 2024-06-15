#include <iostream>
#include "TU_entidades.h"
#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

//Implementação da classe de testes da entidade Pagamento
void TUPagamento::inicio(){
    ponteiro_pagamento = new Pagamento();
}

void TUPagamento::fim(){
    delete ponteiro_pagamento;
}

void TUPagamento::caso_sucesso(){
    try{
        ponteiro_pagamento->setPagamento(codigo_valido, data_valido, percentual_valido, estado_valido);
        auto tuplinha = make_tuple(codigo_valido, data_valido, percentual_valido, estado_valido);
        if (ponteiro_pagamento->getPagamento() == tuplinha){
            cout << endl<<"Sucesso - Entidade Pagamento:" << endl;
            cout << "Codigo de Pagamento: " <<  codigo_valido << endl;
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
            cout << endl<<"Sucesso - Entidade Conta: " <<endl;
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


//Implementação dos metodos da classe de testes da entidade titulo;

void TU_Titulo::start() {
    titulo = new Titulo();
}

void TU_Titulo::fim() {
    delete titulo;
}

void TU_Titulo::caso_sucesso() {
    start();
    try {
        titulo->setTitulo(CODIGO_T_VALIDO, NOME_VALIDO, SETOR_VALIDO, DATA_EMISSAO_VALIDA, DATA_VENCIMENTO_VALIDA, VALOR_VALIDO);
        vector<string> verifica = {CODIGO_T_VALIDO, NOME_VALIDO, SETOR_VALIDO, DATA_EMISSAO_VALIDA, DATA_VENCIMENTO_VALIDA, to_string(VALOR_VALIDO)};
        if (titulo->getTitulo() == verifica) {
            cout<<endl<<"Sucesso - Entidade Titulo: "<<endl;
            cout<<"Codigo Titulo: " << CODIGO_T_VALIDO<< endl;
            cout<<"Emissor: "<<NOME_VALIDO<<endl;
            cout<<"Setor: "<<SETOR_VALIDO<<endl;
            cout<<"Data de emissao: "<<DATA_EMISSAO_VALIDA<<endl;
            cout<<"Data de vencimento: "<<DATA_VENCIMENTO_VALIDA<<endl;
            cout<<"Valor: "<<VALOR_VALIDO<<endl;
        }
    } catch (const invalid_argument& e) {
        cout<< "Falha - Entidade Titulo"<<endl;
    }
    fim();
}

void TU_Titulo::run() {
    caso_sucesso();
}

