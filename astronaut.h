#ifndef ASTRONAUT_H
#define ASTRONAUT_H
#include <iostream>
#include <list>

class Astronaut {
public:
    std::string name;
    std::string cpf;
    int age;
    void testar();
};

int registerAstronaut();

#endif // ASTRONAUT_H
