#include "astronaut.h"
#include "error.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

std::vector<Astronaut *> astronautsList;

Astronaut::Astronaut(std::string &name, int age, std::string &cpf, int situation) 
    : name(name), age(age), cpf(cpf), situation(situation){}
    
const std::string &Astronaut::getName() const {
    return name;
}

int Astronaut::getAge() const {
    return age;
}

int Astronaut::getSituation() {
    return situation;
}

const std::string &Astronaut::getCpf() const{
    return cpf;
}

void Astronaut::setSituation(int n){
    if (n>=0 && n<=2){
        situation = n;
    }
}

void killAstronaut(int flightcode){
    std::cout << " Astronauta morto";
}

void Astronaut::printInfo() {
        std::cout << "\nNome: " << name << ", Idade: " << age<< ", CPF: " << cpf << ", Situação: ";

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

void registerA(){
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
    astronautsList.push_back(new Astronaut(name, age, cpf, situation));
    
    std::cout <<  "Lista atualizada: ";
    for (Astronaut *astronaut : astronautsList){
        astronaut->printInfo();
    }
}

Astronaut* passengerTest(){
    std::string cpf;
    std::cout << "Digite o cpf do astronauta: ";
    std::cin >> cpf;
    Astronaut *astronaut = nullptr;
    for(Astronaut *temp : astronautsList){
        if(temp->getCpf() == cpf){
            astronaut = temp;
             break;
        }
    }
    return astronaut;
}

