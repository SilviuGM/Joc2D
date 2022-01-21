//
// Created by Silviu on 1/21/2022.
//

#include "UserBuilder.h"
#include "User.h"
UserBuilder& UserBuilder::username(std::string us){
    u.username= us;
    return *this;
}
UserBuilder& UserBuilder::password(std::string ps){
    u.password= ps;
    return *this;
}
UserBuilder& UserBuilder::code(std::string cd){
    u.code= cd;
    return *this;
}

User UserBuilder::build(){
    return u;
}