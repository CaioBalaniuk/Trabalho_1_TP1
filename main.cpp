#include <iostream>
#include <stdexcept>
#include <string>
#include "dominios.h"
#include "dominios.cpp"
#include "entidades.h"
#include "entidades.cpp"
#include "TU_dominios.h"
#include "TU_dominios.cpp"
#include <vector>
using namespace std;


//teste classes

int main(){
/*
    CodigoPagamento teste ;
    int a;
    cin>>a;
    try{
        teste.setCodigoP(a);
        cout<<"Seu codigo Pagamento e: "<<teste.getCodigoP()<<endl;
    } catch (const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    CodigoTitulo teste1;
    string b;
    cin>>b;
    try{
        teste1.setCodigoT(b);
        cout<<"Seu codigoT e: "<<teste1.getCodigoT()<<endl;
    } catch (const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    /*CPF teste2;
    string c;
    cin>>c;
    try{
        teste2.setCPF(c);
        cout<<"Seu CPF e: "<<teste2.getCPF()<<endl;
    } catch (const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    Data teste3;
    string d;
    cin>>d;
    try{
        teste3.setData(d);
        cout<<"A data e: "<<teste3.getData()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    Dinheiro teste4;
    float e;
    cin>>e;
    try{
        teste4.setDinheiro(e);
        cout<<"O dinheiro e: "<<teste4.getDinheiro()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    Estado teste5;
    string f;
    cin>>f;
    try{
        teste5.setEstado(f);
        cout<<"O estado e: "<<teste5.getEstado()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };



    Nome teste6;
    string g;
    getline(cin, g);
    try{
        teste6.setNome(g);
        cout<<"O nome e: "<<teste6.getNome()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    Percentual teste7;
    int h;
    cin>>h;
    try{
        teste7.setPercentual(h);
        cout<<"O percentual e: "<<teste7.getPercentual()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    Senha teste8;
    string i;
    cin>>i;
    try{
        teste8.setSenha(i);
        cout<<"A senha e: "<<teste8.getSenha()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };


    Setor teste9;
    string j;
    cin>>j;
    try{
        teste9.setSetor(j);
        cout<<"O setor e: "<<teste9.getSetor()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };*/
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

    return 0;

}
