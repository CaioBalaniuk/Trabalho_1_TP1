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
