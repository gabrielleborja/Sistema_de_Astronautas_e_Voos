#include <iostream>
#include "menu.h"
#include "astronaut.h"
#include "flight.h"
#include "lists.h"
#include "error.h"

void showmenu(){
    std::cout << "+++++++++++++++  MENU  ++++++++++++++++" << std::endl;
    std::cout << "|  Escolha uma das seguintes opções:  |" << std::endl;
    std::cout << "|  1  - Cadastrar novo astronauta     |" << std::endl;
    std::cout << "|  2  - Cadastrar novo voo            |" << std::endl;
    std::cout << "|  3  - Adicionar astronauta em voo   |" << std::endl;
    std::cout << "|  4  - Remover astronauta de voo     |" << std::endl;
    std::cout << "|  5  - Lançar voo                    |" << std::endl;
    std::cout << "|  6  - Explodir voo                  |" << std::endl;
    std::cout << "|  7  - Finalizar voo                 |" << std::endl;
    std::cout << "|  8  - Listar todos os voos          |" << std::endl;
    std::cout << "|  9  - Listar astronautas mortos     |" << std::endl;
    std::cout << "|  10 -  Sair                         |" << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
}

int exitMenu(){
    return 0;
}

//variables
std::string name, cpf;
int age, flightcode;

void choice(int choiceInput){
    switch (choiceInput){
        case 1: 
            std::cout << "++++ Cadastro de Novo Astronauta ++++" << std::endl;
            std::cout << "Digite o nome: ";
            std::cin >> name;
            std::cout << "Digite o cpf: ";
            std::cin >> cpf;
            std::cout << "Digite a idade: ";
            std::cin >> age;
            registerAstronaut(name, cpf, age);
            //!!!!!!!CRIAR REGISTRO DE ESTADO ATUAL DE ASTRONAUTA
            //!!!!!!!TESTAR SE CADASTROU NA LISTA 
            std::cout << "++++ Astronauta Cadastrado ++++" << std::endl;
            menu();
            break;
        case 2: 
            std::cout << "++++ Cadastro de Novo Voo ++++" << std::endl;
            std::cout << "Digite o código de voo: ";
            std::cin >> flightcode;
            //!!!!!!!CRIAR LISTA VAZIA DE PASSAGEIROS
            //!!!!!!!CRIAR REGISTRO DE ESTADO ATUAL DO VOO
            registerFlight(); 
            std::cout << "++++ Voo Cadastrado ++++" << std::endl;
            menu();
            break;
        case 3: 
            std::cout << "++++ Cadastro de Astronauta em Voo ++++" << std::endl;
            std::cout << "Digite o cpf: ";
            std::cin >> cpf;
            //!!!!!!!CHECAR SE EXISTE
            std::cout << "Digite o código de voo: ";
            std::cin >> flightcode;
            //!!!!!!!CHECAR SE EXISTE
            //!!!!!!!CHECAR SE O VOO ESTÁ EM PLANEJAMENTO
            //!!!!!!!DAR OPÇÃO DE MUDAR O CODIGO/CPF SE DER ERRADO
            addAstronaut(); 
            std::cout << "++++ Astronauta Adicionado ao Voo ++++" << std::endl;
            menu();
            break;
        case 4: 
            std::cout << "++++ Remoção de Astronauta de Voo ++++" << std::endl;
            std::cout << "Digite o cpf: ";
            std::cin >> cpf;
            //!!!!!!!CHECAR SE EXISTE
            std::cout << "Digite o código de voo: ";
            std::cin >> flightcode;
            //!!!!!!!CHECAR SE EXISTE
            //!!!!!!!CHECAR SE O VOO ESTÁ EM PLANEJAMENTO
            //!!!!!!!DAR OPÇÃO DE MUDAR O CODIGO/CPF SE DER ERRADO
            removeAstronaut();
            std::cout << "++++ Astronauta Removido do Voo ++++" << std::endl;
            menu();
            break;
        case 5: 
            std::cout << "++++ Lançamento de Voo ++++" << std::endl;
            std::cout << "Digite o código de voo: ";
            std::cin >> flightcode;
            //!!!!!!!CHECAR SE EXISTE
            //!!!!!!!CHECAR SE TEM PELO MENOS 1 PASSAGEIRO
            //!!!!!!!CHECAR SE TODOS OS PASSAGEIROS ESTAO DISPONIVEIS
            //!!!!!!!COLOCAR TODOS OS PASSAGEIROS COMO INDISPONIVEIS
            lauchFlight(); 
            std::cout << "++++ Voo Lançado ++++" << std::endl;
            menu();
            break;
        case 6: 
            std::cout << "++++ Explosão de Voo ++++" << std::endl;
            std::cout << "Digite o código de voo: ";
            std::cin >> flightcode;
            //!!!!!!!CHECAR SE EXISTE
            explodeFlight(flightcode);
            killAstronaut(flightcode);
            std::cout << "++++ Voo Explodido ++++" << std::endl;
            menu();
            break;
        case 7: landFlight(); menu();break;
        case 8: listFlights(); menu();break;
        case 9: listAstronauts();menu(); break;
        case 10: exitMenu(); break;
        default: errorMenu(); menu();break;
    }
}

void menu(){
    int choiceInput;
    showmenu();
    std::cin >> choiceInput;
    choice(choiceInput);
}