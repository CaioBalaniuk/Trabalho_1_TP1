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
        ponteiro_pagamento->setPagamento(codigo_valido, data_valido, percentual_valido, estado_valido)
        if (ponteiro_pagamento->getPagamento() == (codigo_valido, data_valido, percentual_valido, estado_valido)){
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
