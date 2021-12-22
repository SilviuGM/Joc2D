//
// Created by Silviu on 12/22/2021.
//

#ifndef MAIN_CPP_ENTITY_H
#define MAIN_CPP_ENTITY_H
#include <iostream>
#include <string>
#include "description.h"

class Entity
{int x,y;
  const description descriere;  //entitatea se afla intr-un spatiu definit de coordonatele x,y//
public:
Entity(); //constructor w/ parameters //

Entity(int x, int y, const description descriere); //constructor with parameters//

~Entity(); //destructor//

  Entity &operator=(const Entity &copie); //operator = //
};

#endif //MAIN_CPP_ENTITY_H
