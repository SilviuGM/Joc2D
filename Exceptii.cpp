//
// Created by Silviu on 1/19/2022.
//

#include "Exceptii.h"

Eroare_entity::Eroare_entity(const std::string &arg) : runtime_error("Eroare Entity:"+arg) {}

Eroare_miscare::Eroare_miscare() : Eroare_entity("nu te poti deplasa mai mult de 100 miscari orizontal sau vertical") {}

Eroare_attack::Eroare_attack(): Eroare_entity("nu poti ataca cu o valoare negativa") {}
