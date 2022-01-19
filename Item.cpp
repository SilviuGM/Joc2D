//
// Created by Silviu on 1/17/2022.
//

#include "Item.h"

int Item::idmax=0;

Item::Item(const std::string &name, int price, const std::string &rarity) : name(name), price(price), rarity(rarity), id(idmax) {idmax++;}

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
    os << " name: " << item.name << "\n price: " << item.price << "\n rarity: " << item.rarity << "\n";
    return os;
}


