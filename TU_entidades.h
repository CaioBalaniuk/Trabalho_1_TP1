#ifndef TU_ENTIDADES_H_INCLUDED
#define TU_ENTIDADES_H_INCLUDED

#include "entidades.h"
using namespace std;

/**
 * @brief Classe de teste de unidade para a entidade Pagamento (Feito por: 231013529).
 * 
 * Esta classe testa os métodos da entidade Pagamento, verificando a configuração e recuperação de dados.
 */
class TUPagamento {
private:
    /**
     * @brief Código válido para o pagamento.
     */
    int codigo_valido = 12345678;
    
    /**
     * @brief Data válida para o pagamento.
     */
    string data_valido = "25-05-2025";
    
    /**
     * @brief Percentual válido para o pagamento.
     */
    int percentual_valido = 50;
    
    /**
     * @brief Estado válido para o pagamento.
     */
    string estado_valido = "Liquidado";

    /**
     * @brief Ponteiro para instância da classe de entidade. 
     */
    Pagamento* ponteiro_pagamento;

    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void inicio();
    
    /**
     * @brief Testa o caso de sucesso para a entidade Pagamento.
     */
    void caso_sucesso();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void fim();

public:
    /**
     * @brief Executa os testes de unidade para a entidade Pagamento.
     */
    void run();
};

/**
 * @brief Classe de teste de unidade para a entidade Conta (Feito por: 231036292).
 * 
 * Esta classe testa os métodos da entidade Conta, verificando a configuração e recuperação de dados.
 */
class TU_Conta {
private:
    /**
     * @brief Valor válido para o CPF.
     */
    const string VALOR_VALIDO_CPF = "123.456.789-09";
    
    /**
     * @brief Valor válido para o nome.
     */
    const string VALOR_VALIDO_NOME = "John Doe";
    
    /**
     * @brief Valor válido para a senha.
     */
    const string VALOR_VALIDO_SENHA = "946287";

    /**
     * @brief Ponteiro para instância da classe de entidade. 
     */
    Conta *conta;

    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void setUp();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void tearDown();
    
    /**
     * @brief Testa o caso de sucesso para a entidade Conta.
     */
    void testarSucesso();

public:
    /**
     * @brief Executa os testes de unidade para a entidade Conta.
     */
    void run();
};

/**
 * @brief Classe de teste de unidade para a entidade Titulo (Feito por: 231025190).
 * 
 * Esta classe testa os métodos da entidade Titulo, verificando a configuração e recuperação de dados.
 */
class TU_Titulo {
private:
    /**
     * @brief Código válido para o título.
     */
    string CODIGO_T_VALIDO = "LCA01455786";
    
    /**
     * @brief Nome válido para o título.
     */
    string NOME_VALIDO = "Giuseppe Camole";
    
    /**
     * @brief Setor válido para o título.
     */
    string SETOR_VALIDO = "Papel e celulose";
    
    /**
     * @brief Data de emissão válida para o título.
     */
    string DATA_EMISSAO_VALIDA = "15-06-2024";
    
    /**
     * @brief Data de vencimento válida para o título.
     */
    string DATA_VENCIMENTO_VALIDA = "31-12-2025";
    
    /**
     * @brief Valor válido para o título.
     */
    float VALOR_VALIDO = 999999;

    /**
     * @brief Ponteiro para instância da classe de entidade. 
     */
    Titulo* titulo;

    /**
     * @brief Aloca memória de forma dinâmica.
     */
    void start();
    
    /**
     * @brief Desaloca memória de forma dinâmica.
     */
    void fim();
    
    /**
     * @brief Testa o caso de sucesso para a entidade Titulo.
     */
    void caso_sucesso();

public:
    /**
     * @brief Executa os testes de unidade para a entidade Titulo.
     */
    void run();
};

#endif // TU_ENTIDADES_H_INCLUDED
