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
    std::cout << "|  10 - Cadastrar novo astronauta     |" << std::endl;
    std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
}

int exitMenu(){
    return 0;
}

void choice(int choiceInput){
    switch (choiceInput){
        case 1: registerAstronaut(); break;
        case 2: registerFlight(); break;
        case 3: addAstronaut(); break;
        case 4: removeAstronaut(); break;
        case 5: lauchFlight(); break;
        case 6: explodeFlight(); break;
        case 7: landFlight(); break;
        case 8: listFlights(); break;
        case 9: listAstronauts(); break;
        case 10: exitMenu(); break;
        default: errorMenu(); break;
    }
}