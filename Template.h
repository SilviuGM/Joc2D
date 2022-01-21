//
// Created by Silviu on 1/21/2022.
//

#ifndef PROIECTOOP_TEMPLATE_H
#define PROIECTOOP_TEMPLATE_H
#include <string>
#include <ostream>

template<class T>
class EntityTemplate {
private:
    T x,y;
    T hp, atk;
    std::string name;
    std::string description;
public:
    EntityTemplate();

    EntityTemplate(T x, T y, T hp, T atk, const std::string &name, const std::string &description);

    EntityTemplate(const EntityTemplate& copy);

    virtual ~EntityTemplate();

    bool operator==(const EntityTemplate &rhs) const;

    bool operator!=(const EntityTemplate &rhs) const;

    virtual void MoveEntity(const EntityTemplate A, T x, T y);

    virtual void AttackEntity( const EntityTemplate Attacker, const int n);

    void afisare();
};




#endif //PROIECTOOP_TEMPLATE_H
