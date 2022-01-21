//
// Created by Silviu on 1/17/2022.
//

#ifndef PROIECTOOP_USER_H
#define PROIECTOOP_USER_H
#include <string>
#include <ostream>

class User {
private:
    std::string username;
    std::string password;
    std::string code;
    friend class UserBuilder;
public:
    User() = default;

    User(const std::string &username, const std::string &password, const std::string &code);

    bool operator==(const User &rhs) const;

    bool operator!=(const User &rhs) const;

    virtual ~User();

    friend std::ostream &operator<<(std::ostream &os, const User &user);


};


#endif //PROIECTOOP_USER_H
