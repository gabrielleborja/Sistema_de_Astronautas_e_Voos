#include <iostream>
#include <list>
#include "menu.h"
#include "astronaut.h"
#include "flight.h"
#include "error.h"

int menu(std::vector<Astronaut> astronautsList, std::vector<Flight> flightsList){

    int choiceInput=0;
    while((choiceInput<=0 || choiceInput>10)){
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
        std::cout << "|  10 - Sair                          |" << std::endl;
        std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
        std::cin >> choiceInput;
    }
    
    switch (choiceInput)
    {
    case 1:
        registerA(astronautsList);
        break;
    case 2:
        registerF(astronautsList, flightsList);
        break;
    default:
        break;
    }
    return 0;
}

int exitMenu(){
    return 0;
}

//variables
// std::string name, cpf;
// int age, flightcode;

// void choice(int choiceInput, std::list<Flight>& flightList, std::list<Astronaut> &astronautList){
//     switch (choiceInput){
//         case 1: 
//             std::cout << "++++ Cadastro de Novo Astronauta ++++" << std::endl;
//             std::cout << "Digite o nome: ";
//             std::cin >> name;
//             std::cout << "Digite o cpf: ";
//             std::cin >> cpf;
//             std::cout << "Digite a idade: ";
//             std::cin >> age;
            
//             break;
//     }
// }

// void menu(std::list<Flight>& flightList, std::list<Astronaut>& astronautList){
//     int choiceInput;
//     std::cin >> choiceInput;
//     choice(choiceInput, &flightList, &astronautList);
// }