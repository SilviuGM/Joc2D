//
// Created by Silviu on 1/21/2022.
//

#include "ItemFactory.h"

Item ItemFactory::Sword() {
    return Item("Sword",50,"common");
}
Item ItemFactory::Shield() {
    return Item("Shield",30,"common");
}
Item ItemFactory::Potion() {
    return Item("Potion", 20 , "common");
}
Item ItemFactory::Book() {
    return Item("Book", 100, "rare");
}
Item ItemFactory::Wand() {
    return Item("Wand",150, "rare");
}