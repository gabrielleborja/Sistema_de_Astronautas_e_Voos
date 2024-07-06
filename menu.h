#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <vector>
#include "flight.h"
#include "astronaut.h"

int menu(std::vector<Astronaut> astronautsList, std::vector<Flight> flightsList);
void choice(int choiceInput);
int exitmenu();
void menu();

#endif // MENU_H