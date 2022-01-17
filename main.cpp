#include <iostream>
#include "Entity.h"
#include "Item.h"
#include "User.h"

int main() {
    Entity A( 2 , 3 ,  5 , 6 , "Silver" , "player");
    Entity B( 3 ,5 , 10 , 9 , "Crow" , "enemy");
    std:: cout << A;
    std::cout << std::endl;
    std::cout <<B;
    std::cout << std::endl;
    A.MoveEntity ( A , 2 , 3);
    std:: cout << A;
    std::cout << std::endl;
    A.AttackEntity( B, A, 1);
    std::cout << B ;
    std::cout << std::endl;
    Item Branza("Branza",23, "rar");
    std::cout << Branza;
    std::cout << std::endl;
    User Utilizator( "Weisz" , "parola123" , "985567");
    std::cout << Utilizator;
}