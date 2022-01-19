//
// Created by Silviu on 1/17/2022.
//

#ifndef PROIECTOOP_ITEM_H
#define PROIECTOOP_ITEM_H
#include <ostream>
#include <string>

class Item {
private: std::string name;
    int price;
    std::string rarity;
    int id;
    static int idmax;
public:
    Item() = default;

    Item(const std::string &name, int price, const std::string &rarity);

    Item(const Item& copy);

    bool operator==(const Item &rhs) const;

    bool operator!=(const Item &rhs) const;

    virtual ~Item();

    friend std::ostream &operator<<(std::ostream &os, const Item &item);

};


#endif //PROIECTOOP_ITEM_H

