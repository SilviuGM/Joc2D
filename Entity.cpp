//
// Created by Silviu on 1/17/2022.
//

#include "Entity.h"

Entity::Entity(int x, int y, int hp, int atk, const std::string &name, const std::string &description) : x(x),
                                                                                                                 y(y),
                                                                                                                 hp(hp),
                                                                                                                 atk(atk),
                                                                                                                 name(name),
                                                                                                                 description(
                                                                                                                         description) {}
Entity::Entity(const Entity &copy) {
this->x = copy.x;
this->y = copy.y;
this->hp = copy.hp;
this->atk = copy.atk;
this->name = copy.name;
this->description = copy.description;
}
bool Entity::operator==(const Entity &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           hp == rhs.hp &&
           atk == rhs.atk &&
           name == rhs.name &&
           description == rhs.description;
}

bool Entity::operator!=(const Entity &rhs) const {
    return !(rhs == *this);
}

void Entity::MoveEntity(const Entity A, int x , int y) {
    this->x = A.x+x;
    this->y= A.y+y;
}
// mutam entitatea intr-o alta coordonata
 void Entity::AttackEntity(const Entity Attacker, const int n) {
    this->hp = this->hp-n*Attacker.atk;
    if(this->hp<0) this->hp=0;
}
// Enitatea attacker ataca entitatea 
Entity::~Entity() {

}

std::ostream &operator<<(std::ostream &os, const Entity &entity) {
    os << "x: " << entity.x << " y: " << entity.y << " hp: " << entity.hp << " atk: " << entity.atk << " name: "
       << entity.name << " description: " << entity.description;
    return os;
}



