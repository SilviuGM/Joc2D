//
// Created by Silviu on 1/21/2022.
//

#ifndef PROIECTOOP_ITEMFACTORY_H
#define PROIECTOOP_ITEMFACTORY_H
#include "Item.h"

class ItemFactory {
public:
    static Item Sword();
    static Item Shield();
    static Item Potion();
    static Item Book();
    static Item Wand();
};


#endif //PROIECTOOP_ITEMFACTORY_H
