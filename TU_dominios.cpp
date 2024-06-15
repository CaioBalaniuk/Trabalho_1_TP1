#include <iostream>
#include "TU_dominios.h"
#include <string>

using namespace std;
//Implementação metodos da classe TU_CodigoP;

void TU_CodigoP::caso_sucesso() {
    try {
        codigo.setCodigoP(VALOR_VALIDO);
        if (codigo.getCodigoP() == VALOR_VALIDO) {
            cout<<"SUCESSO - CODIGO PAGAMENTO: "<<codigo.getCodigoP()<<" e valido."<<endl;
        }
    } catch (const invalid_argument& e) {
        cout<<"FALHA   -"<<e.what()<<endl;
    }
}

void TU_CodigoP::caso_falha() {
    try {
        codigo.setCodigoP(VALOR_INVALIDO);
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - CODIGO PAGAMENTO: "<<VALOR_INVALIDO<<" e invalido."<<endl;
    }
}

void TU_CodigoP::run() {
    caso_sucesso();
    caso_falha();
}

//Implementação metodos da clase TU_CodigoT;

void TU_CodigoT::casos_sucesso() {
    try {
        codigo.setCodigoT(VALOR_VALIDO);
        if (codigo.getCodigoT() == VALOR_VALIDO) {
            cout<<"SUCESSO - CODIGO TITULO: "<<codigo.getCodigoT()<<" e valido."<<endl;
        }
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - "<<e.what()<<endl;
    }
}

void TU_CodigoT::casos_falha() {
    try {
        codigo.setCodigoT(VALOR_INVALIDO);
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - CODIGO TITULO: "<<VALOR_INVALIDO<<" e invalido."<<endl;
    }
}

void TU_CodigoT::runn() {
    casos_sucesso();
    casos_falha();
}

//Implementação metodos da classe TU_CPF;

void TU_CPF::caso_sucesso() {
    try {
        cpf.setCPF(VALOR_VALIDO);
        if (cpf.getCPF() == VALOR_VALIDO) {
            cout<<"SUCESSO - CPF: "<<cpf.getCPF()<<" e valido."<<endl;
        }
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - "<<e.what()<<endl;
    }
}

void TU_CPF::caso_falha() {
    try {
        cpf.setCPF(VALOR_INVALIDO);
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - CPF: "<<VALOR_INVALIDO<<" e invalido."<<endl;
    }
}

void TU_CPF::run() {
    caso_sucesso();
    caso_falha();
}

//Implementação metodos da Classe TU_DATA;

void TU_DATA::start(){
    data = new Data();
}

void TU_DATA::fim() {
    delete data;
}

void TU_DATA::caso_sucesso() {
    start();
    try {
        data->setData(VALOR_VALIDO);
        if (data->getData() == VALOR_VALIDO) {
            cout<<"SUCESSO - DATA: "<<data->getData()<<" e valida."<<endl;
        }
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - "<<e.what()<<endl;
    }
    fim();
}

void TU_DATA::caso_falha() {
    start();
    try {
        data->setData(VALOR_INVALIDO);
    } catch (const invalid_argument& e) {
        cout<<"FALHA   - DATA: "<<VALOR_INVALIDO<<" e invalida."<<endl;
    }
    fim();
}

void TU_DATA::run() {
    caso_sucesso();
    caso_falha();
}

//Implementação da Classe de Teste para o Percentual
void TUPercentual::inicio(){
    ponteiro_percentual = new Percentual();
    estado = sucesso;
}

void TUPercentual::fim(){
    delete ponteiro_percentual;
}

void TUPercentual::caso_sucesso(){
    try{
        ponteiro_percentual->setPercentual(valido);
        if (ponteiro_percentual->getPercentual()==valido){
            cout << "SUCESSO - PERCENTUAL: " << valido << " e valido." <<endl;
        } else {
            estado = falha;
        }
    } catch (invalid_argument e) {
        estado = falha;
    }
}

void TUPercentual::caso_falha(){
    try {
        ponteiro_percentual->setPercentual(invalido);
        estado = falha;
    } catch(invalid_argument e){
        cout << "FALHA   - PERCENTUAL: " << invalido << " e invalido." << endl;

    }

}

void TUPercentual::run(){
    inicio();
    caso_sucesso();
    caso_falha();
    fim();
}


//Implementação da Classe de Teste para o Nome
void TUNome::inicio() {
    ponteiro_nome = new Nome();
    estado = sucesso;
}

void TUNome::fim(){
    delete ponteiro_nome;
}

void TUNome::caso_sucesso(){
    try{
        ponteiro_nome->setNome(valido);
        if (ponteiro_nome->getNome()==valido){
            cout << "SUCESSO - NOME: " << valido << " e valido." <<endl;
        } else {
            estado = falha;
        }
    } catch (invalid_argument e) {
        estado = falha;
    }
}

void TUNome::caso_falha(){
    try {
        ponteiro_nome->setNome(invalido);
        estado = falha;
    } catch(invalid_argument e){
        cout << "FALHA   - NOME: " << invalido << " e invalido." << endl;

    }

}

void TUNome::run(){
    inicio();
    caso_sucesso();
    caso_falha();
    fim();
}


//Implementação da Classe de Teste para o Senha
void TUSenha::inicio(){
    ponteiro_senha = new Senha();
    estado = sucesso;
}

void TUSenha::fim(){
    delete ponteiro_senha;
}

void TUSenha::caso_sucesso(){
    try{
        ponteiro_senha->setSenha(valido);
        if (ponteiro_senha->getSenha()==valido){
            cout << "SUCESSO - SENHA: " << valido << " e valido." <<endl;
        } else {
            estado = falha;
        }
    } catch (invalid_argument e) {
        estado = falha;
    }
}

void TUSenha::caso_falha(){
    try {
        ponteiro_senha->setSenha(invalido);
        estado = falha;
    } catch(invalid_argument e){
        cout << "FALHA   - SENHA: " << invalido << " e invalido." << endl;

    }

}

void TUSenha::run(){
    inicio();
    caso_sucesso();
    caso_falha();
    fim();
}

//Implementação da Classe de Teste para o Setor
void TU_Setor::setUp() {
    setor = new Setor("");
}

void TU_Setor::tearDown() {
    delete setor;
}

void TU_Setor::testarCenarioSucesso(string valor) {
    try {
        setor->setSetor(valor);
        cout << "SUCESSO - SETOR: " << valor << " e valido." << endl;
    } catch (invalid_argument &e) {
        cout << "FALHA   - SETOR: " << valor << " e invalido." << endl;
    }
}

void TU_Setor::testarCenarioFalha(string valor) {
    try {
        setor->setSetor(valor);
        cout << "SUCESSO - SETOR: " << valor << " e valido." << endl;
    } catch (invalid_argument &e) {
        cout << "FALHA   - SETOR: " << valor << " e invalido." << endl;
    }
}

void TU_Setor::run() {
    setUp();
    testarCenarioSucesso("Agricultura");
    testarCenarioFalha("Automobilismo");
    tearDown();
}

//Implementação da Classe de Teste para o Estado
void TU_Estado::setUp() {
    estado = new Estado("");
}

void TU_Estado::tearDown() {
    delete estado;
}

void TU_Estado::testarCenarioSucesso(string valor) {
    try {
        estado->setEstado(valor);
        cout << "SUCESSO - ESTADO: " << valor << " e valido." << endl;
    } catch (invalid_argument &e) {
        cout << "FALHA   - ESTADO: " << valor << " e invalido." << endl;
    }
}

void TU_Estado::testarCenarioFalha(string valor) {
    try {
        estado->setEstado(valor);
        cout << "SUCESSO - ESTADO: " << valor << " e valido." << endl;
    } catch (invalid_argument &e) {
        cout << "FALHA   - ESTADO: " << valor << " e invalido." << endl;
    }
}

void TU_Estado::run() {
    setUp();
    testarCenarioSucesso("Previsto");
    testarCenarioFalha("Inexistente");
    tearDown();
}

//Implementação da Classe de Teste para o Dinheiro
void TU_Dinheiro::setUp() {
    dinheiro = new Dinheiro();
}

void TU_Dinheiro::tearDown() {
    delete dinheiro;
}

void TU_Dinheiro::testarCenarioSucesso(float valor) {
    try {
        dinheiro->setDinheiro(valor);
        cout << "SUCESSO - DINHEIRO: " << valor << " e valido." << endl;
    } catch (invalid_argument &e) {
        cout << "FALHA   - DINHEIRO: " << valor << " e invalido." << endl;
    }
}

void TU_Dinheiro::testarCenarioFalha(float valor) {
    try {
        dinheiro->setDinheiro(valor);
        cout << "SUCESSO - DINHEIRO: " << valor << " e valido." << endl;
    } catch (invalid_argument &e) {
        cout << "FALHA   - DINHEIRO: " << valor << " e invalido." << endl;
    }
}

void TU_Dinheiro::run() {
    setUp();
    testarCenarioSucesso(1000.00);
    testarCenarioFalha(2000000.00);
    tearDown();
}
