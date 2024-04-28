#include <iostream>
#include "dominios.h"
#include <string>

using namespace std;
string alfabeto=("ABCDEFGHIJKLMNOPQRSTUVWXYZ");



//Metodos classe CodigoPagamento
CodigoPagamento::CodigoPagamento(int b=0){
    codigo=b;
};

void CodigoPagamento::setCodigoP(int a){
    if (a<9999999 || a>100000000){                     //checando se o codigo possui o numero de caracteres desejado
        throw invalid_argument("Codigo invalido.");
    }
    codigo=a;
};

int CodigoPagamento::getCodigoP(){
    return codigo;
};




//Metodos classe CodigoTitulo

CodigoTitulo::CodigoTitulo(string a=" "){
    codigo=a;
};

void CodigoTitulo::setCodigoT(string b){
    bool juri =true;
    int contador;
    apoio+=b[0];
    apoio+=b[1];           //apoio � uma string que possui os 3 primeiros caracteres do codigo a fim de tornar mais facil a checagem
    apoio+=b[2];
    if (apoio=="CDB" ||apoio=="CRA" ||apoio== "CRI" || apoio=="LCA" || apoio=="LCI" || apoio=="DEB"){ //checando se os 3 primeiros caracteres coincidem com as normas
        if (b.length()==11){ //checando se o codigo possui o n�mero necessario de caracteres
            for (char i : b){
                contador=0;
                for (int k=0;k<(alfabeto.length());k+=1){  // checando se todos os caracteres s�o letras maiusculas
                    if (i==alfabeto[k]){
                        break;
                    }
                    else if (i>='0' && i<='9'){  //ap�s checar se os caracteres n�o s�o letras maiusculas, checando se eles s�o num�ricos
                        break;
                    };
                    contador+=1;
                };
                if (contador==(alfabeto.length())){
                    juri=false;
                    break;
                };
            };
            if (juri==true){ // se o juri permaneceu true, significa que n�o houve problemas, ou seja todos os caracteres est�o de acordo com as normas,
            codigo=b;        // logo o codigo � valido
            }
            else{
                throw invalid_argument("Codigo invalido.");
            };
        }
        else{
            throw invalid_argument("Codigo invalido.");
        };
    }
    else{
        throw invalid_argument ("Codigo invalido.");
    };
};

string CodigoTitulo::getCodigoT(){
    return codigo;
};



//Metodos classe CPF

CPF::CPF(string c1=" "){
    cpf=c1;
};

string CPF::calcula_ultimos2(string c2){  //metodo apenas para calcular os ultimos 2 digitos do cpf
    int result=0;
    int peso1=10;
    int peso2=11;
    int m;
    string resp="";
    for (int p=0;p<11;p+=1){        //somando os nove primeiros digitos com seus pesos
        if (c2[p]!='.'){              //tirando os .
            m= (c2[p]);
            m=m-48;       //subtraindo o valor de int '0', para cada int 'numero' ter seu verdadeiro valor
            result+=(peso1*m);
            peso1-=1;
        };
    };
    result=result%11;
    if (result>=2){
        result=11-result;
        string apoi=to_string(result);          // adicionando � resposta o valor relacionado ao primeiro dos ultimos 2 digitos
        resp+=apoi;
    }
    else{
        string apoi=to_string(0);
        resp+=apoi;
    };
    result=0;
    for (int p1=0;p1<13;p1+=1){
        if (c2[p1]!='.' && c2[p1]!='-'){               //somando agora os 9 primeiros digitos com seus pesos, mas cm a adi��o do digito calculado a cima
            m=c2[p1];
            m=m-48;
            result+=(peso2*m);
            peso2-=1;
        };
    };
    result=result%11;
    if (result>=2){
        result=11-result;
        string apoi=to_string(result);
        resp+=apoi;
    }                                            //adicionando o ultimo digito � resposta
    else{
        string apoi=to_string(0);
        resp+=apoi;
    };
    return resp;
};

void CPF::setCPF(string c){
    apoio+=c[12];             //criando uma variavel que guarde os ultimos 2 digitos do cpf, para compara��o com o calculo, a fim de verificar se � valido
    apoio+=c[13];
    bool juri=true;
    if (c.length()!=14){         //verificando se o a string colocada possu� o numero minimo de caracteres a fim de ser val�da
        juri=false;
    };
    for (int i=0;i<c.length();i+=1){
        if (i==11){
            if (c[i]!='-'){
                juri=false;      //verificando se o '-' est� no lugar certo
                break;
            };
        }
        else if (i==3 || i==7){
            if (c[i]!='.'){          //verificando se os '.' est�o no lugar certo
                juri=false;
                break;
            };
        }
        else if (c[i]<='0' && c[i]>='9'){
            juri=false;                         //verificando se todos os caracteres s�o numeros
            break;
        };
    };
    if (apoio != calcula_ultimos2(c)){      //chamando o metodo implementado a cima a fim de validar os ultimos 2 digitos
        juri=false;
    };
    if (juri==true){      // se todas as condi��es foram satisfeitas, o cpf ser� valido
        cpf=c;
    }
    else{
        throw invalid_argument ("CPF invalido."); //se alguma das condi��es n�o foi satisfeita o erro ser� lan�ado
    };
};

string CPF::getCPF(){
    return cpf;
};




//METODOS CLASSE DATA


void Data::arrumar(string d1){      //metodo que verifica se todos os caracteres, al�m dos hifens, s�o n�mericos e ainda arruma as variavies dia mes e ano
    string apoiodia="";             // as quais s�o usadas mais na frente no codigo;
    string apoiomes="";
    string apoioano="";
    for (int i=0;i<10;i+=1){
        if (i==0 || i==1){         //pega o dia
            apoiodia+=d1[i];

        }
        else if (i==3 || i==4){  // pega o mes
            apoiomes+=d1[i];
        }
        else if (i==6 || i==7 || i==8 ||i==9){   //pega o ano
            apoioano+=d1[i];
        };
    };
        dia=stoi(apoiodia);      //transforma a string possuindo o dia em um inteiro, se o a string n�o for composta apenas por caracteres n�mericos, vai dar erro.
        mes=stoi(apoiomes);      // transforma a string possuindo o m�s em um inteiro, a explica��o a cima se encaixa aqui tamb�m;
        ano=stoi(apoioano);      // faz a mesma coisa das outras mas com o ano;
};

bool Data::verifica_ano_bissexto() {
    for (int i = 2000; i <= 2100; i += 4) {         // verifica se o ano � bissexto, retornando true se for e false se n�o for;
        if (ano == i) {
            return true;
        };
    };
    return false;
}

bool Data::verifica_mes() {
    int tabela_sim[] = {1, 3, 5, 7, 8, 10, 12};   //verifica se o m�s possui 31 dias ou n�o, retorna true se possuir e false se n�o possuir;
    int tabela_nao[] = {2, 4, 6, 9, 11};
    for (int i : tabela_sim) {
        if (i == mes) {
            return true;
        }
    };
    for (int i1 : tabela_nao) {
        if (i1 == mes) {
            return false;
        }
    };
}

bool Data::verifica_dia() {   // verifica se o dia � valido com base seu m�s e o ano;
    bool m = verifica_mes();
    bool b = verifica_ano_bissexto();
    if (dia > 00 && dia < 31 && mes != 2) {   // se for qualquer dia abaixo de 31 e diferente do m�s 2, sempre estar� certo;
        return true;
    } else if (dia == 29 && mes == 2 && b == true) {  //se for dia 29 e m�s 2, mas for ano bissexto, est� certo;
        return true;
    } else if (dia == 31 && m == true) {  //verifica se o mes pode ter 31 dias ou n�o com base na fun��o implementada a cima;
        return true;                                                  // se for dia 31 e for um m�s que possua 31 dias, est� certo;
    } else if (dia > 00 && dia<29 && mes == 2) {
        return true;            // se for m�s 2, mas qualquer dia abaixo de 29, estar� sempre correto;
    } else {
        return false;   //se n�o se aplicar a nenhum dos casos corretos, estar� sempre errado;
    }
}

void Data::setData(string d){
    bool juri=true;
    if (d[2]!='-' || d[5]!= '-'){   //verifica se os hif�s existem e est�o no lugar certo
        juri=false;
    };
    if (d.length()!=10){   //verifica se a string possui o numero correto de caracteres;
        juri=false;
    };
    try{
        arrumar(d);
    } catch (const invalid_argument& e){   // arruma as variaveis dia, mes e ano, al�m de verificar se os caracteres s�o todos n�mericos;
        juri=false;
    };
    if (mes<1 || mes>12){  //verifica se o m�s existe;
        juri=false;
    };
    if (ano<2000 || ano>2100){  //verifica se o ano est� no intervalo correto;
        juri=false;
    };
    if (verifica_dia() == false) {  //verifica se o dia � v�lido;
        juri = false;
    }

    if (juri==true){   // se nenhuma das possibilidades a cima foi encontrada, o juri permanecer� true e data ser� atribuida.
        data=d;
    }
    else {
        throw invalid_argument ("Data invalida.");  // se qualquer uma das possibilidades a cima for encontrada, ser� lan�ada exce��o;
    };


};

string Data::getData(){
    return data;
};









