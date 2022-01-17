//
// Created by Silviu on 1/17/2022.
//

#include "Player.h"

Player::Player(int x, int y, int hp, int atk, const std::string &name, const std::string &description,
               const User &owner) : Entity(x, y, hp, atk, name, description), Owner(owner) {}

Player::Player(const Player &copie) {

}

bool Player::operator==(const Player &rhs) const {
    return static_cast<const Entity &>(*this) == static_cast<const Entity &>(rhs) &&
           Owner == rhs.Owner;
}

bool Player::operator!=(const Player &rhs) const {
    return !(rhs == *this);
}