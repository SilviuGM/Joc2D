//
// Created by Silviu on 1/17/2022.
//

#include "User.h"

User::User(const std::string &username, const std::string &password, const std::string &code) : username(username),
                                                                                                password(password),
                                                                                                code(code) {}

std::ostream &operator<<(std::ostream &os, const User &user) {
    os << "username: " << user.username << " password: " << user.password << " code: " << user.code;
    return os;
}

bool User::operator==(const User &rhs) const {
    return username == rhs.username &&
           password == rhs.password &&
           code == rhs.code;
}

bool User::operator!=(const User &rhs) const {
    return !(rhs == *this);
}

User::~User() {

}
