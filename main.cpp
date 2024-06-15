#include <iostream>
#include <stdexcept>
#include <string>
#include "dominios.h"
#include "entidades.h"
#include "entidades.cpp"
#include "TU_dominios.h"
#include "TU_dominios.cpp"
#include "TU_entidades.h"
#include "TU_entidades.cpp"
#include <vector>
using namespace std;


//teste classes

int main(){
    TU_CodigoP teste1;
    teste1.run();

    TU_CodigoT teste2;
    teste2.runn();

    TU_CPF teste3;
    teste3.run();

    TU_DATA teste4;
    teste4.run();

    TUPercentual teste5;
    teste5.run();

    TUNome teste6;
    teste6.run();

    TUSenha teste7;
    teste7.run();

    TU_Setor teste8;
    teste8.run();

    TU_Estado teste9;
    teste9.run();

    TU_Dinheiro teste10;
    teste10.run();

    TUPagamento teste11;
    teste11.run();

    TU_Conta teste12;
    teste12.run();

    TU_Titulo teste13;
    teste13.run();
    return 0;


}

