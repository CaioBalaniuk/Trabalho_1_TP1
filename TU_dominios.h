#ifndef TU_DOMINIOS_H_INCLUDED
#define TU_DOMINIOS_H_INCLUDED

#include "dominios.h"
#include <vector>

using namespace std;

/**
 * @brief Classe de teste de unidade para a classe CodigoPagamento (Feito por: 231025190).
 * 
 * Esta classe testa os métodos da classe CodigoPagamento, verificando a validação de códigos válidos e inválidos.
 */
class TU_CodigoP {
private:
    /**
     * @brief Valor válido para o código de pagamento.
     */
    const static int VALOR_VALIDO = 50124789;
    
    /**
     * @brief Valor inválido para o código de pagamento.
     */
    const static int VALOR_INVALIDO = 4512300;

    CodigoPagamento codigo;
    
    /**
     * @brief Testa o caso de sucesso para a validação do código de pagamento.
     */
    void caso_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação do código de pagamento.
     */
    void caso_falha();

public:
    /**
     * @brief Executa os testes de unidade para a classe CodigoPagamento.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe CodigoTitulo (Feito por: 231025190).
 * 
 * Esta classe testa os métodos da classe CodigoTitulo, verificando a validação de códigos válidos e inválidos.
 */
class TU_CodigoT {
private:
    /**
     * @brief Valor válido para o código de título.
     */
    const string VALOR_VALIDO = "CDB12039875";
    
    /**
     * @brief Valor inválido para o código de título.
     */
    const string VALOR_INVALIDO = "LKC44222588";

    CodigoTitulo codigo;
    
    /**
     * @brief Testa o caso de sucesso para a validação do código de título.
     */
    void casos_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação do código de título.
     */
    void casos_falha();

public:
    /**
     * @brief Executa os testes de unidade para a classe CodigoTitulo.
     */
    void runn();
};


/**
 * @brief Classe de teste de unidade para a classe CPF (Feito por: 231025190).
 * 
 * Esta classe testa os métodos da classe CPF, verificando a validação de CPFs válidos e inválidos.
 */
class TU_CPF {
private:
    /**
     * @brief Valor válido para o CPF.
     */
    const string VALOR_VALIDO = "123.456.789-09";
    
    /**
     * @brief Valor inválido para o CPF.
     */
    const string VALOR_INVALIDO = "123.456.789-11";

    CPF cpf;
    
    /**
     * @brief Testa o caso de sucesso para a validação do CPF.
     */
    void caso_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação do CPF.
     */
    void caso_falha();

public:
    /**
     * @brief Executa os testes de unidade para a classe CPF.
     */
    void run();
};

/**
 * @brief Classe de teste de unidade para a classe Data (Feito por: 231025190).
 * 
 * Esta classe testa os métodos da classe Data, verificando a validação de datas válidas e inválidas.
 */
class TU_DATA {
private:
    /**
     * @brief Valor válido para a data.
     */
    const string VALOR_VALIDO = "29-02-2024";
    
    /**
     * @brief Valor inválido para a data.
     */
    const string VALOR_INVALIDO = "31-04-2099";
    
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Data* data;
    
    /**
     * @brief Testa o caso de sucesso para a validação da data.
     */
    void caso_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação da data.
     */
    void caso_falha();
    
    /**
     * @brief Inicia o teste de unidade.
     */
    void start();
    
    /**
     * @brief Finaliza o teste de unidade.
     */
    void fim();

public:
    /**
     * @brief Executa os testes de unidade para a classe Data.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe Percentual (Feito por: 231013529).
 * 
 * Esta classe testa os métodos da classe Percentual, verificando a validação de percentuais válidos e inválidos.
 */
class TUPercentual {
private:
    /**
     * @brief Valor válido para o percentual.
     */
    const static int valido = 50;
    
    /**
     * @brief Valor inválido para o percentual.
     */
    const static int invalido = 150;
    
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Percentual* ponteiro_percentual;

    /**
     * @brief Variável para armazenar o estado do teste de unidade.
     */
    bool estado;
    
    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void inicio();
    
    /**
     * @brief Testa o caso de sucesso para a validação do percentual.
     */
    void caso_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação do percentual.
     */
    void caso_falha();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void fim();

public:
    /**
     * @brief Indicador de sucesso no teste de unidade.
     */
    const static bool sucesso = true;
    
    /**
     * @brief Indicador de falha no teste de unidade.
     */
    const static bool falha = false;

    /**
     * @brief Executa os testes de unidade para a classe Percentual.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe Nome (Feito por: 231013529).
 * 
 * Esta classe testa os métodos da classe Nome, verificando a validação de nomes válidos e inválidos.
 */
class TUNome {
private:
    /**
     * @brief Valor válido para o nome.
     */
    const string valido = "Pedro Raul";
    
    /**
     * @brief Valor inválido para o nome.
     */
    const string invalido = "M0ISES";
    
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Nome* ponteiro_nome;

    /**
     * @brief Variável para armazenar o estado do teste de unidade.
     */
    bool estado;
    
    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void inicio();
    
    /**
     * @brief Testa o caso de sucesso para a validação do nome.
     */
    void caso_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação do nome.
     */
    void caso_falha();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void fim();

public:
    /**
     * @brief Indicador de sucesso no teste de unidade.
     */
    const static bool sucesso = true;
    
    /**
     * @brief Indicador de falha no teste de unidade.
     */
    const static bool falha = false;

    /**
     * @brief Executa os testes de unidade para a classe Nome.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe  Senha (Feito por: 231013529).
 * 
 * Esta classe testa os métodos da classe Senha, verificando a validação de senhas válidas e inválidas.
 */
class TUSenha {
private:
    /**
     * @brief Valor válido para a senha.
     */
    const string valido = "738294";
    
    /**
     * @brief Valor inválido para a senha.
     */
    const string invalido = "123456";
    
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Senha* ponteiro_senha;

    /**
     * @brief Variável para armazenar o estado do teste de unidade.
     */
    bool estado;
    
    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void inicio();
    
    /**
     * @brief Testa o caso de sucesso para a validação da senha.
     */
    void caso_sucesso();
    
    /**
     * @brief Testa o caso de falha para a validação da senha.
     */
    void caso_falha();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void fim();

public:
    /**
     * @brief Indicador de sucesso no teste de unidade.
     */
    const static bool sucesso = true;
    
    /**
     * @brief Indicador de falha no teste de unidade.
     */
    const static bool falha = false;

    /**
     * @brief Executa os testes de unidade para a classe Senha.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe Setor (Feito por: 231036292).
 * 
 * Esta classe testa os métodos da classe Setor, verificando a validação de setores.
 */
class TU_Setor {
private:
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Setor *setor;
    
    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void setUp();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void tearDown();
    
    /**
     * @brief Testa o caso de sucesso para a validação do setor.
     * 
     * @param valor Valor a ser testado.
     */
    void testarCenarioSucesso(string valor);
    
    /**
     * @brief Testa o caso de falha para a validação do setor.
     * 
     * @param valor Valor a ser testado.
     */
    void testarCenarioFalha(string valor);

public:
    /**
     * @brief Executa os testes de unidade para a classe Setor.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe Estado (Feito por: 231036292).
 * 
 * Esta classe testa os métodos da classe Estado, verificando a validação de estados.
 */
class TU_Estado {
private:
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Estado *estado;
    
    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void setUp();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void tearDown();
    
    /**
     * @brief Testa o caso de sucesso para a validação do estado.
     * 
     * @param valor Valor a ser testado.
     */
    void testarCenarioSucesso(string valor);
    
    /**
     * @brief Testa o caso de falha para a validação do estado.
     * 
     * @param valor Valor a ser testado.
     */
    void testarCenarioFalha(string valor);

public:
    /**
     * @brief Executa os testes de unidade para a classe Estado.
     */
    void run();
};


/**
 * @brief Classe de teste de unidade para a classe Dinheiro (Feito por: 231036292).
 * 
 * Esta classe testa os métodos da classe Dinheiro, verificando a validação de valores.
 */
class TU_Dinheiro {
private:
    /**
     * @brief Ponteiro para instância da classe de domínio.
     */
    Dinheiro *dinheiro;
    
    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void setUp();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void tearDown();
    
    /**
     * @brief Testa o caso de sucesso para a validação do valor.
     * 
     * @param valor Valor a ser testado.
     */
    void testarCenarioSucesso(float valor);
    
    /**
     * @brief Testa o caso de falha para a validação do valor.
     * 
     * @param valor Valor a ser testado.
     */
    void testarCenarioFalha(float valor);

public:
    /**
     * @brief Executa os testes de unidade para a classe Dinheiro.
     */
    void run();
};

#endif // TU_DOMINIOS_H_INCLUDED
