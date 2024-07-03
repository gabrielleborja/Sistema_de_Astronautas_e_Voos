#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include <iostream>
#include <vector>
#include "flight.h"




class Astronaut {
private:
    std::string name;
    int age;
    std::string cpf;
    int situation;   
public:
    // Construtor
    Astronaut(std::string name, int age, std::string cpf, int situation);

    // Método para imprimir os detalhes da pessoa
    // void printInfo() const {
    //     std::cout << "Nome: " << name << ", Idade: " << age << ", CPF: " << cpf << std::endl;
    // }

   
    void killAstronaut(int flightcode);
};

    
void registerA(std::vector<Astronaut> &astronautList);

#endif // ASTRONAUT_H
