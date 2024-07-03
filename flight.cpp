#include "flight.h"
#include <iostream>
#include <vector>

Flight::Flight(int flightCode){
    this->flightCode=flightCode;
}

void registerF(std::vector<Flight> &flightsList){
    int code;
    std::cout << "++++ Cadastro de Novo Voo ++++" << std::endl;
    std::cout << "Digite o código: ";
    std::cin >> code;
    Flight flight(code);
    flightsList.push_back(flight);
}

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

// int addAstronaut(){
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

