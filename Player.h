//
// Created by Silviu on 1/17/2022.
//

#ifndef PROIECTOOP_PLAYER_H
#define PROIECTOOP_PLAYER_H
#include "Entity.h"
#include "Item.h"
#include "User.h"
#include <memory>
#include <vector>

class Player:public Entity {
private:
User Owner;
std::vector<std::shared_ptr<Item>> Inventory;
public:
    Player() = default;
    Player(int x, int y, int hp, int atk, const std::string &name, const std::string &description, const User &owner);
    Player( const Player& copie );

    void AddItem(std::shared_ptr<Item> item);
    bool operator==(const Player &rhs) const;

    bool operator!=(const Player &rhs) const;

    std::ostream& print(std::ostream& os) const override;
};


#endif //PROIECTOOP_PLAYER_H
