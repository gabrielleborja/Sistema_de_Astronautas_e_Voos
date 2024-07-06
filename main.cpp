#include <iostream>
#include <vector>
#include "flight.h"
#include "astronaut.h"
#include "menu.h"

int main(){
    static std::vector<Astronaut> astronautsList; 
    static std::vector<Flight> flightsList;   
    menu(astronautsList, flightsList); 
    return 0;
}



     
   
