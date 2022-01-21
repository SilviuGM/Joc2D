//
// Created by Silviu on 1/21/2022.
//

#ifndef PROIECTOOP_USERBUILDER_H
#define PROIECTOOP_USERBUILDER_H
#include "User.h"

class UserBuilder {
private:
    User u;
public:
    UserBuilder() = default;
    UserBuilder& username(std::string un);
    UserBuilder& password(std::string pw);
    UserBuilder& code(std::string cd);
    User build();
};




#endif //PROIECTOOP_USERBUILDER_H
