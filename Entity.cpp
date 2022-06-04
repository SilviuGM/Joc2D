//
// Created by Silviu on 1/17/2022.
//

#include "Entity.h"
#include "Exceptii.h"

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
    if(x>100 || y>100) throw Eroare_miscare();
    this->x = A.x+x;
    this->y= A.y+y;
}
// mutam entitatea intr-o alta coordonata
 void Entity::AttackEntity(const Entity Attacker, const int n) {
    if(n<0) throw Eroare_attack();
    this->hp = this->hp-n*Attacker.atk;
    if(this->hp<0) this->hp=0;
}
// Enitatea attacker ataca entitatea target
Entity::~Entity() {

}

std::ostream &operator<<(std::ostream &os, const Entity &entity) {

    return entity.print(os);
}

std::ostream &Entity::print(std::ostream &os) const {
    os << "x: " << this->x << " y: " << this->y << " hp: " << this->hp << " atk: " << this->atk << " name: "
       << this->name << " description: " << this->description;
    return os;
}

int Entity::getX() const {
    return x;
}

int Entity::getY() const {
    return y;
}



int Entity::getAtk() const {
    return atk;
}

Entity &Entity::operator=(const Entity &e) {
    if(  this != &e )
    {
        this->x = e.x;
    this->y = e.y;
    this->hp = e.hp;
    this->atk = e.atk;
    this->name = e.name;
    this->description = e.description;
    }
    return *this;
}






