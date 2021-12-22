//
// Created by Silviu on 12/22/2021.
//

#include "description.h"

description::description() : name("insert name"),story("insert story"){
    // cout<<"create";//
}

description::description(const std::string &name, const std::string &story){
    this-> name = name;
    this-> story = story;
    // cout<<"copy";//
}
description::~description(){
    // cout<<"destroy";//
}
description &description::operator=(const description &copie){
    this-> name = copie.name;
    this-> story = copie.story;
    return *this;
    // cout<<"copy";//
}
