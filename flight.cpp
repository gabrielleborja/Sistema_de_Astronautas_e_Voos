#include "flight.h"
#include "menu.h"
#include "astronaut.h"
#include <iostream>
#include <vector>
#include <limits>

Flight::Flight(int flightCode, int situation, std::vector<std::string> passengersList){
    this->flightCode=flightCode;
    this->situation=situation;
    this->passengersList=passengersList;
}

void registerF(std::vector<Astronaut> astronautsList, std::vector<Flight> flightsList){
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
    std::vector<std::string> passengersList;
    Flight flight(code, situation, passengersList);
    flightsList.push_back(flight);

    std::cout << "Lista atualizada de voos: ";
    for (int i=0; i<flightsList.size(); i++){
        flightsList[i].printInfo();
    }
    menu(astronautsList, flightsList);
    
}

// int addAstronaut(){
//     \\
// }

// int Flight::getFlightCode() {
//     return flightCode;
// }

// void Flight::setFlightCode(int code) {
//     if (code < 0) { 
//         // 
//     }

//     flightCode = code;
// }

// int Flight::registerFlight(){
//     return 0;
// }



// int removeAstronaut(){
//     return 0;
// }

// int lauchFlight(){
//     return 0;
// }

// int explodeFlight(int flightcode){
//     return 0;
// }

// int landFlight(){
//     return 0;
// }

