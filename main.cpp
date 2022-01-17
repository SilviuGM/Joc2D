#include <iostream>
#include "Entity.h"
#include "Item.h"
#include "User.h"
#include "Player.h"

int main() {
    Entity A( 2 , 3 ,  5 , 6 , "Silver" , "player");
    Entity B( 3 ,5 , 100 , 9 , "Crow" , "enemy");
    std:: cout << A;
    std::cout << std::endl;
    std::cout <<B;
    std::cout << std::endl;
    A.MoveEntity ( A , 2 , 3);
    std:: cout << A;
    std::cout << std::endl;
    B.AttackEntity(  A, 1);
    std::cout << B ;
    std::cout << std::endl;
    Item Branza("Branza",23, "rar");
    std::cout << Branza;
    std::cout << std::endl;
    User Utilizator( "Weisz" , "parola123" , "985567");
    std::cout << Utilizator;
    std::cout << std::endl;
    Player Silviu( 5, 5, 5, 5, "StarShine", "player", Utilizator);
    std::cout << Silviu;
    std::cout<< std::endl;
    Silviu.MoveEntity( Silviu, 10, 10);
    std::cout << Silviu;
    std::cout<< std::endl;
    B.AttackEntity( Silviu, 1);
    std::cout << B ;
    std::cout << std::endl;
    std::cout << Silviu;

}
