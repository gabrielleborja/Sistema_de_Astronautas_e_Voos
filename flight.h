#ifndef FLIGHT_H
#define FLIGHT_H
#include <iostream>
#include <vector>
#include <string>
#include "astronaut.h"

class Astronaut;

class Flight {
private:
   int flightCode;
   int situation;

public:
   int getFlightCode() const;
   void setFlightCode(int flightCode);
   int getSituation();
   std::vector<Astronaut *> getPassengersList();
   std::vector<Astronaut *> passengersList;

   Flight(int code, int situation, std::vector<Astronaut *> passengersList);

void printInfo();
void setSituation(int n);


};

//int removeAstronaut(Astronaut* astronaut);
int launchFlight();
int explodeFlight();
int landFlight();
int addPassenger(Astronaut* astronaut);
void registerF();
void listAllFlights();
#endif // FLIGHT_H
