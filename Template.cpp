//
// Created by Silviu on 1/21/2022.
//

#include "Template.h"
#include <iostream>
template<class T>
EntityTemplate<T>::EntityTemplate(T x, T y, T hp, T atk, const std::string &name, const std::string &description):x(x),
                                                                                                                  y(y),
                                                                                                                  hp(hp),
                                                                                                                  atk(atk),
                                                                                                                  name(name),
                                                                                                                  description(
                                                                                                                          description) {}

template<class T>
EntityTemplate<T>::~EntityTemplate() {}

template<class T>
EntityTemplate<T>::EntityTemplate(const EntityTemplate& copy){
    this->x = copy.x;
    this->y = copy.y;
    this->hp = copy.hp;
    this->atk = copy.atk;
    this->name = copy.name;
    this->description = copy.description;
}

template<class T>
bool EntityTemplate<T>::operator==(const EntityTemplate &rhs) const {
    return x == rhs.x &&
           y == rhs.y &&
           hp == rhs.hp &&
           atk == rhs.atk &&
           name == rhs.name &&
           description == rhs.description;
}

template<class T>
bool EntityTemplate<T>::operator!=(const EntityTemplate &rhs) const {
    return !(rhs == *this);
}
template<class T>
void EntityTemplate<T>::MoveEntity(const EntityTemplate<T> A, T x , T y) {

    this->x = A.x+x;
    this->y= A.y+y;
}
template<class T>
void EntityTemplate<T>::AttackEntity(const EntityTemplate<T> Attacker, const int n) {
    this->hp = this->hp-n*Attacker.atk;
    if(this->hp<0) this->hp=0;

}
template<class T>
void EntityTemplate<T>::afisare() {
    std::cout << " x: " << x << " y: " << y << "x: "  << " hp: " << hp << " atk: " << atk << " name: "
                                               << name << " description: " << description <<"\n";

}



template
class EntityTemplate<int>;

template
class EntityTemplate<float>;
