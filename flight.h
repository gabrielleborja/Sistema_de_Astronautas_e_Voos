#ifndef FLIGHT_H
#define FLIGHT_H

class Flight {
public:
   int flightCode;
   void teste();
};

int registerFlight();
int addAstronaut();
int removeAstronaut();
int lauchFlight();
int explodeFlight();
int landFlight();

#endif // FLIGHT_H
