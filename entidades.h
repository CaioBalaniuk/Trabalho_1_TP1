#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED
#include "dominios.h"
#include <string>
#include <tuple>

using namespace std;

//Declaração da Classe Pagamento
class Pagamento{
private:
    CodigoPagamento codigo;
    Data data;
    Percentual percentual;
    Estado estado;

public:
    void setPagamento(int novo_codigo, string nova_data, int novo_percentual, string novo_estado);
    tuple<int, string, int, string> getPagamento();
};

//Declaração da Classe Titulo;
class Titulo {
    private:
        CodigoTitulo codigo;
        Nome emissor;
        Setor setor;
        Data emissao;
        Data vencimento;
        Dinheiro valor;
    public:
        void setTitulo (string, string, string, string, string, int);
        vector<string> getTitulo();

};

#endif // ENTIDADES_H_INCLUDED
