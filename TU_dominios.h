#ifndef TU_DOMINIOS_H_INCLUDED
#define TU_DOMINIOS_H_INCLUDED
#include "dominios.h"


using namespace std;

//Classe teste de unidade codigo pagamento
class TU_CodigoP {
private:
    const static int VALOR_VALIDO = 50124789;
    const static int VALOR_INVALIDO = 4512300;
    CodigoPagamento codigo;
    void caso_sucesso();
    void caso_falha();
public:
    const static bool SUCESSO = true;
    const static bool FALHA = false;
    void run();


};


#endif // TU_DOMINIOS_H_INCLUDED
