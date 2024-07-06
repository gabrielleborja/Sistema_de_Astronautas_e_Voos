#include "error.h"
#include <iostream>
#include <vector>
#include <limits>


bool nametest(std::string name){
    for (char c : name) {
        if (!std::isalpha(c) && !std::isspace(c)) {
            return false;
        }
    }
    return true;
}

bool cpftest(std::string cpf){
    for (char c : cpf) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}
