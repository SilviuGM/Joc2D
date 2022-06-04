//
// Created by Silviu on 1/17/2022.
//

#ifndef PROIECTOOP_ENTITY_H
#define PROIECTOOP_ENTITY_H
#include <string>
#include <ostream>

class Entity {
protected:
    int x,y;
    int hp, atk;
    std::string name;
    std::string description;
public:
    Entity() = default ;

    Entity(int x, int y, int hp, int atk, const std::string &name, const std::string &description);

    Entity(const Entity& copy);

    virtual ~Entity();

    Entity &operator=(Entity const&e) ;

    bool operator==(const Entity &rhs) const;

    bool operator!=(const Entity &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Entity &entity);

    virtual std::ostream& print(std::ostream& os) const;

   virtual void MoveEntity(const Entity A, int x, int y);

   virtual void AttackEntity(  Entity Attacker, const int n);

    int getX() const;

    int getY() const;



    int getAtk() const;


};


#endif //PROIECTOOP_ENTITY_H
