#include "flight.h"
#include "astronaut.h"
#include <iostream>
#include <vector>
#include <limits>

std::vector<Flight *> flightsList;

Flight::Flight(int flightCode, int situation, std::vector<Astronaut *> passengersList)
    :flightCode(flightCode), situation(situation), passengersList(passengersList){}

int Flight::getFlightCode() const {
    return flightCode;
}

int Flight::getSituation(){
    return situation;
}
void Flight::setSituation(int n){
        situation = n;
}


std::vector<Astronaut *> Flight::getPassengersList(){
    return passengersList;
}



void Flight::printInfo() {
        std::cout << "\nCódigo de voo: " << flightCode << ", Situação: ";

        switch (situation)
        {
        case 0:
            std::cout << "Em planejamento, ";
            break;
        case 1: 
            std::cout << "Em viagem, ";
            break;
        case 2:
            std::cout << "Explodido, ";
            break;
        case 3:
            std::cout << "Finalizado, ";
            break;
        default:
            break;
        }
        std::cout << "Lista de passageiros: | ";
        for (Astronaut *passenger : passengersList){
            std::cout << passenger << " | ";
        }
        std::cout << "\n";
    }

void registerF(){
    int code;
    std::cout << "++++ Cadastro de Novo Voo ++++" << std::endl;
    while (true) {
        std::cout << "Digite o código: ";
        std::cin >> code;
        if (std::cin.fail() || code < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Digite um código válido.\n";
        } else {
            break; 
        }
    }
    int situation = 0;
    std::vector<Astronaut *> passengersList;
    flightsList.push_back(new Flight(code, situation, passengersList));
    std::cout << "Lista atualizada de voos: ";
    for (Flight *flight : flightsList){
        flight->printInfo();
    }
    
}

int addPassenger(Astronaut* astronaut){
    if(astronaut = nullptr){
        std::cout << "Desculpe! CPF inválido.\n";
    }
    int flightCode;
    std::cout << "Digite o código do voo: ";
    std::cin >> flightCode;
    Flight *flight = nullptr;
    for(Flight *temp : flightsList){
        if(temp->getFlightCode() == flightCode){
            flight = temp;
            temp->getPassengersList().push_back(astronaut);
            std::cout << "Passageiro cadastrado ao voo!\n";
            std::cout << astronaut->getName();
        }
        else{
            std::cout << "Desculpe! Código de voo inválido.\n";
        }
    }
    return 0;
}

// int removePassenger(){
//     std::string cpf;
//     int flightCode;
//     std::cout << "Digite o cpf do astronauta: ";
//     std::cin >> cpf;
//     Astronaut *astronaut = nullptr;
//     // for(Astronaut *temp : astronautsList){
//     //     if(temp->getCpf() == cpf){
//     //         astronaut = temp;
//     //         break;
//     //     }
    
//     if(astronaut = nullptr){
//         std::cout << "Desculpe! CPF inválido.\n";
//     }
//     else{
//         std::cout << "Digite o código do voo: ";
//         std::cin >> flightCode;
//         Flight *flight = nullptr;
//         for(Flight *temp : flightsList){
//             if(temp->getFlightCode() == flightCode){
//                 flight = temp;
//                 temp->getPassengersList().push_back(astronaut);
//                 std::cout << "Passageiro cadastrado ao voo!\n";
//             }
//             else{
//                 std::cout << "Desculpe! Código de voo inválido.\n";
//             }
//         }
//     }
    

//     return 0;
// }


int launchFlight(){
    int flightCode;
    std::cout << "Digite o código do voo: ";
    std::cin >> flightCode;
    Flight *flight = nullptr;
    for(Flight *temp : flightsList){
        if(temp->getFlightCode() == flightCode){
            flight = temp;
            if(flight->getPassengersList().empty()){
                std::cout << "Voo sem astronautas não pode ser lançado.\n";
                return 0;
            }
            if(flight->getSituation()==0){
                flight->setSituation(1);
                for(Astronaut *temp : flight->getPassengersList()){
                    temp->setSituation(1);
                }
            }
            std::cout << "Vou decolou em segurança!\n";
            break;
        }
    }
    return 0;
}


int explodeFlight(){
    int flightCode;
    std::cout << "Digite o código do voo: ";
    std::cin >> flightCode;
    Flight *flight = nullptr;
    for(Flight *temp : flightsList){
        if(temp->getFlightCode() == flightCode){
            flight = temp;
            if(flight->getSituation()==1){
                flight->setSituation(2);
                for(Astronaut *temp : flight->getPassengersList()){
                    temp->setSituation(2);
                }
            }
            std::cout << "Voo explodido.\n";
            break;
        }
    }

    return 0;
}

int landFlight(){
    int flightCode;
    std::cout << "Digite o código do voo: ";
    std::cin >> flightCode;
    Flight *flight = nullptr;
    for(Flight *temp : flightsList){
        if(temp->getFlightCode() == flightCode){
            flight = temp;
            if(flight->getSituation()==1){
                flight->setSituation(3);
                for(Astronaut *temp : flight->getPassengersList()){
                    temp->setSituation(3);
                }
                std::cout << "Voo aterrissou em segurança!\n";
            }
            
            break;
        }
    }
    return 0;
}

