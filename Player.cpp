//
// Created by Silviu on 1/17/2022.
//

#include "Player.h"
#include "Exceptii.h"
#include "Entity.h"


Player::Player(int x, int y, int hp, int atk, const std::string &name, const std::string &description,
               const User &owner) : Entity(x, y, hp, atk, name, description), Owner(owner) {}

Player::Player(const Player &copy): Entity(copy) {
    this->Owner = copy.Owner;
    this->Inventory = copy.Inventory;
}

bool Player::operator==(const Player &rhs) const {
    return static_cast<const Entity &>(*this) == static_cast<const Entity &>(rhs) &&
           Owner == rhs.Owner;
}

bool Player::operator!=(const Player &rhs) const {
    return !(rhs == *this);
}

void Player::AddItem(std::shared_ptr<Item> item) {
    this->Inventory.push_back(std::make_shared<Item>(*item));

}

std::ostream &Player::print(std::ostream &os) const {
   Entity::print(os);
   os <<  "User: " << this->Owner << "\n";
   os << "Inventar: \n";
   for(const auto& Item:this->Inventory ){
       os << "Item: \n" << *Item << "\n";
   }
}
void Player::MoveEntity(const Entity A, int x , int y) {
    if(x>100 || y>100) throw Eroare_miscare();
    this->x = A.getX()+x;
    this->y= A.getY()+y;

}

void Player::AttackEntity(const Entity Attacker, const int n) {
    if(n<0) throw Eroare_attack();
    this->hp = this->hp-n*Attacker.getAtk();
    if(this->hp<0) this->hp=0;

}

Player &Player::operator=(const Player &p) {
if(this!=&p){
   Entity::operator=(p);
    this->Owner = p.Owner;
    this->Inventory = p.Inventory;
}
    return *this;
}


