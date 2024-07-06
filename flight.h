#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <vector>
#include <string>
#include "astronaut.h"

class Flight {
private:
   int flightCode;
   int situation;
   std::vector<std::string> passengersList;

public:
   int getFlightCode();
   void setFlightCode(int flightCode);

   Flight(int code, int situation, std::vector<std::string> passengerList);

   void printInfo() const {
        std::cout << "\nCódigo de voo: " << flightCode<< ", Situação: ";

        switch (situation)
        {
        case 0:
            std::cout << "Livre, ";
            break;
        case 1: 
            std::cout << "Ocupado, ";
            break;
        case 2:
            std::cout << "Morto, ";
            break;
        default:
            break;
        }
        std::cout << "Lista de passageiros: | ";
        for (int i; i<passengersList.size(); i++){
         std::cout << passengersList[i] << " | ";
        }
        std::cout << "\n";
    }

// auto f = new Flight();
// f.registerFlight();

int addAstronaut();
int removeAstronaut();
int lauchFlight();
int explodeFlight(int flightcode);
int landFlight();
};

void registerF(std::vector<Astronaut> astronautsList, std::vector<Flight> flightList);
#endif // FLIGHT_H
