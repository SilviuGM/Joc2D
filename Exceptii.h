//
// Created by Silviu on 1/19/2022.
//

#ifndef PROIECTOOP_EXCEPTII_H
#define PROIECTOOP_EXCEPTII_H
#include <stdexcept>

class Eroare_entity: public std::runtime_error {
public:
    Eroare_entity(const std::string &arg);
};

class Eroare_miscare: public Eroare_entity{
public:
    Eroare_miscare();
};

class Eroare_attack: public Eroare_entity{
public: Eroare_attack();
};
#endif //PROIECTOOP_EXCEPTII_H
