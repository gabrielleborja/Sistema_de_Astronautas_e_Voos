#include "astronaut.h"
#include "error.h"
#include <iostream>
#include <vector>
#include <limits>

Astronaut::Astronaut(std::string name, int age, std::string cpf, int situation) {
    this->name=name;
    this->age=age;
    this->cpf=cpf;
    this->situation=situation;
    }

int Astronaut::getAstronautName(Astronaut astronaut) {
    std::cout<<"Astronauta: "<< name;
    return 0;
}

void killAstronaut(int flightcode){
    std::cout << " Astronauta morto";
}

void registerA(std::vector<Astronaut> astronautsList){
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
    while(cpftest(cpf) == false){
        std::cout << "Digite o cpf: ";
        std::cin >> cpf;
    }
     while (true) {
        std::cout << "Digite a idade: ";
        std::cin >> age;
        if (std::cin.fail() || age < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Digite uma idade válida.\n";
        } else {
            break; 
        }
    }
    situation = 0;
    Astronaut astronaut(name, age, cpf, situation);
    astronautsList.push_back(astronaut);
    
    std::cout <<  "Lista atualizada: ";
    for (int i=0; i<astronautsList.size(); i++){
        astronautsList[i].printInfo();
    }
}