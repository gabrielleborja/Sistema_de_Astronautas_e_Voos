#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include <iostream>
#include <vector>




class Astronaut {
private:
    std::string name;
    int age;
    std::string cpf;
    int situation;   
public:
    // Construtor
    Astronaut(std::string name, int age, std::string cpf, int situation);

    //Método para imprimir os detalhes da pessoa
    void printInfo() const {
        std::cout << "\nNome: " << name << ", Idade: " << age << ", CPF: " << cpf << ", Situação: ";

        switch (situation)
        {
        case 0:
            std::cout << "Livre";
            break;
        case 1: 
            std::cout << "Ocupado";
            break;
        case 2:
            std::cout << "Morto";
            break;
        default:
            break;
        }
        std::cout << "\n";
    }
    int getAstronautName(Astronaut);
    void killAstronaut(int flightcode);
};

    
void registerA(std::vector<Astronaut> astronautList);

#endif // ASTRONAUT_H
