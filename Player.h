//
// Created by Silviu on 1/17/2022.
//

#ifndef PROIECTOOP_PLAYER_H
#define PROIECTOOP_PLAYER_H
#include "Entity.h"
#include "Item.h"
#include "User.h"
#include <memory>
class Player:public Entity {
private:
User Owner;
public:
    Player(int x, int y, int hp, int atk, const std::string &name, const std::string &description, const User &owner);
    Player( const Player& copie );

    bool operator==(const Player &rhs) const;

    bool operator!=(const Player &rhs) const;
};


#endif //PROIECTOOP_PLAYER_H
