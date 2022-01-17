//
// Created by Silviu on 1/17/2022.
//

#include "Item.h"



Item::Item(const std::string &name, int price, const std::string &rarity) : name(name), price(price), rarity(rarity) {}

Item::Item(const Item &copy) {
    this->name = copy.name;
    this->price = copy.price;
    this->rarity = copy.rarity;
}

bool Item::operator==(const Item &rhs) const {
    return name == rhs.name &&
           price == rhs.price &&
           rarity == rhs.rarity ;
}

bool Item::operator!=(const Item &rhs) const {
    return !(rhs == *this);
}

Item::~Item() {

}

std::ostream &operator<<(std::ostream &os, const Item &item) {
    os << "name: " << item.name << " price: " << item.price << " rarity: " << item.rarity;
    return os;
}


