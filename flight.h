#ifndef FLIGHT_H
#define FLIGHT_H
#include <vector>


class Flight {
private:
   int flightCode;

public:
   int getFlightCode();
   void setFlightCode(int flightCode);

   Flight(int age);

// auto f = new Flight();
// f.registerFlight();

int registerFlight();
int addAstronaut();
int removeAstronaut();
int lauchFlight();
int explodeFlight(int flightcode);
int landFlight();
};

void registerF(std::vector<Flight> &flightList);
#endif // FLIGHT_H
