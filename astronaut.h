#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include <iostream>
#include <vector>
#include "flight.h"

class Flight;

class Astronaut {
private:
    std::string name;
    int age;
    std::string cpf;
    int situation;   
public:
    Astronaut(): name(""), age(0), cpf(""), situation(0){}
    // Construtor
    Astronaut(std::string &name, int age, std::string &cpf, int situation);

    const std::string &getName() const;
    int getAge() const;
    int getSituation();
    void setSituation(int n);
    const std::string &getCpf() const;
   
    void printInfo(); 
    void killAstronaut(int flightcode);
};
 Astronaut* passengerTest();
 void registerA();

#endif // ASTRONAUT_H
