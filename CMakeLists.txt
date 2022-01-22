cmake_minimum_required(VERSION 3.21)
project(ProiectOOP)

set(CMAKE_CXX_STANDARD 14)

add_executable(ProiectOOP main.cpp Entity.cpp Entity.h Item.cpp Item.h User.cpp User.h Player.cpp Player.h Exceptii.cpp Exceptii.h Template.cpp Template.h ItemFactory.cpp ItemFactory.h UserBuilder.cpp UserBuilder.h)
