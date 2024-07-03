#include "astronaut.h"
#include <iostream>
#include <vector>
#include <limits>

Astronaut::Astronaut(std::string name, int age, std::string cpf, int situation) {
        this->name=name;
        this->age=age;
        this->cpf=cpf;
        this->situation=situation;
    }

bool nametest(std::string name){
    for (char c : name) {
        if (!std::isalpha(c) && !std::isspace(c)) {
            return false;
        }
    }
    return true;
}

bool numbertest(std::string cpf){
    for (char c : cpf) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}

void killAstronaut(int flightcode){
    std::cout << " Astronauta morto";
}

void registerA(std::vector<Astronaut> &astronautsList){
    std::string name, cpf;
    int age, situation;
    std::cout << "++++ Cadastro de Novo Astronauta ++++" << std::endl;
    std::cout << "Digite o nome: ";
    std::cin >> name;
    while(nametest(name)==false){
        std::cout << "Digite o nome: ";
        std::cin >> name; 
    }
    std::cout << "Digite o cpf: ";
    std::cin >> cpf;
    while(numbertest(cpf) == false){
        std::cout << "Digite o cpf: ";
        std::cin >> cpf;
    }
    std::cout << "Digite a idade: ";
    std::cin >> age;
    while(!(std::cin >> age)){
        std::cin.clear(); 
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Digite a idade: ";
        std::cin >> age;

    }
    situation = 0;
    Astronaut astronaut(name, age, cpf, situation);
    //astronautsList.push_back(astronaut);
}