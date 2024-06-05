#include <iostream>
#include "TU_dominios.h"
#include <string>

using namespace std;
//Implementação metodos da classe TU_CodigoP;

void TU_CodigoP::caso_sucesso() {
    try {
        codigo.setCodigoP(VALOR_VALIDO);
        if (codigo.getCodigoP() == VALOR_VALIDO) {
            cout<<"SUCESSO - CODIGO: "<<codigo.getCodigoP()<<" e valido."<<endl;
        } else {
        }
    } catch (const invalid_argument& e) {
        cout<<"FALHA -"<<e.what()<<endl;
    }
}

void TU_CodigoP::caso_falha() {
    try {
        codigo.setCodigoP(VALOR_INVALIDO);
    } catch (const invalid_argument& e) {
        cout<<"FALHA - CODIGO: "<<VALOR_INVALIDO<<" e invalido."<<endl;
    }
}

void TU_CodigoP::run() {
    caso_falha();
    caso_sucesso();
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
            cout << "SUCESSO - CODIGO: " << valido << " e valido." <<endl;
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
        cout << "FALHA - CODIGO: " << invalido << " e invalido." << endl;

    }

}

void TUPercentual::run(){
    inicio();
    caso_sucesso();
    caso_falha();
    fim();
}
