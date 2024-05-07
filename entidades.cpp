#include <iostream>
#include "entidades.h"
#include <string>
#include <stdexcept>


using namespace std;

//Implementação da Classe Pagamento
void Pagamento::setPagamento(int novo_codigo, string nova_data, int novo_percentual, string novo_estado){
    codigo.setCodigo(novo_codigo);
    data.setData(nova_data);
    percentual.setPercentual(novo_percentual);
    estado.setEstado(novo_estado);
}

tuple<int, string, int, string> Pagamento::getPagamento(){
    int f_codigo = codigo.getCodigo();
    string f_data = data.getData();
    int f_percentual = percentual.getPercentual();
    string f_estado = estado.getEstado();

    return make_tuple(f_codigo, f_data, f_percentual, f_estado);
}


