#include <iostream>
#include <list>
#include "flight.h"
#include "astronaut.h"
#include "menu.h"

int main(){
    std::cout << "main ok"<< '\n';

    Flight teste1;
    teste1.teste();

    Astronaut teste2;
    teste2.testar();

    int choiceInput;
    showmenu();
    std::cin >> choiceInput;
    choice(choiceInput);
    
    return 0;
}