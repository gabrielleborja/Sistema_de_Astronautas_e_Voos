#include <iostream>
#include <vector>
#include "flight.h"
#include "astronaut.h"


int main(){  
        int choiceInput=0;
        Astronaut* astronaut;
        while((choiceInput>=0 && choiceInput<10)){
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
            std::cout << "|  Qualquer outro número para Sair    |" << std::endl;
            std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
            std::cin >> choiceInput;
            switch (choiceInput){
                case 1:
                    registerA();
                    break;
                case 2:
                    registerF();
                    break;
                case 3:
                    astronaut = passengerTest();
                    addPassenger(astronaut);
                    break;
                case 4:
                    astronaut = passengerTest();
                    //removeAstronaut(astronaut);
                    break;
                case 5:
                    launchFlight();
                    break;
                case 6:
                    explodeFlight();
                    break;
                case 7:
                    landFlight();
                    break;
                case 8:
                    listAllFlights();
                    break;
                default:
                    break;
            }
        }

    return 0;
}



     
   
