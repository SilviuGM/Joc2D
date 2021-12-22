//
// Created by Silviu on 12/22/2021.
//

#ifndef MAIN_CPP_DESCRIPTION_H
#define MAIN_CPP_DESCRIPTION_H

#include <iostream>
#include <string>

class description
{std::string name;
std::string story;
public:
description(); //constructor fara parametrii
description(const std::string &name, const std::string &story); //constrcutor cu parametrii
~description();//destructor
description &operator=(const description &copie);//operator=




};
#endif //MAIN_CPP_DESCRIPTION_H
