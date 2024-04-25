#include <iostream>
#include <stdexcept>
#include <string>
#include "dominios.h"
#include "dominios.cpp"
using namespace std;


//teste classe  CodigoPagamento.

int main(){
    /*CodigoPagamento teste ;
    int a;
    cin>>a;
    try{
        teste.setCodigoP(a);
        cout<<"Seu codigo e: "<<teste.getCodigoP()<<endl;
    } catch (const invalid_argument& e){
        cout<<e.what()<<endl;
    };

    CodigoTitulo teste1;
    string b;
    cin>>b;
    try{
        teste1.setCodigoT(b);
        cout<<"Seu codigo e: "<<teste1.getCodigoT()<<endl;
    } catch (const invalid_argument& e){
        cout<<e.what()<<endl;
    };*/

    CPF teste2;
    string c;
    cin>>c;
    try{
        teste2.setCPF(c);
        cout<<"Seu CPF e: "<<teste2.getCPF()<<endl;
    } catch (const invalid_argument& e){
        cout<<e.what()<<endl;
    };

    /*Data teste3;
    string d;
    cin>>d;
    try{
        teste3.setData(d);
        cout<<"A data e: "<<teste3.getData()<<endl;
    } catch(const invalid_argument& e){
        cout<<e.what()<<endl;
    };*/
    return 0;



}


