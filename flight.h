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

// auto f = new Flight();
// f.registerFlight();
void printInfo();
void setSituation(int n);


};

//extern std::vector<Flight *> flightsList;

int removeAstronaut();
int launchFlight();
int explodeFlight();
int landFlight();
int addPassenger(Astronaut* astronaut);
void registerF();
#endif // FLIGHT_H
