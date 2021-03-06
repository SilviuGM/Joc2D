#include <iostream>
#include "Entity.h"
#include "Item.h"
#include "User.h"
#include "Player.h"
#include "Exceptii.h"
#include "Template.h"
#include "ItemFactory.h"
#include "UserBuilder.h"

int main() {
     try {

        EntityTemplate<int> t (2,3,5,6,"t","test");
         EntityTemplate<float> f (2.7,3.3,5.6,6.5,"t","test");
         f.MoveEntity(f,5.3,5.9);
         f.afisare();
         t.afisare();
         Item Carte= ItemFactory::Book();
         std::cout << Carte<< "\n";
         UserBuilder bb;
         User Mihai= bb.username("Mihai").password("Miahi123").code("233455").build();
         std::cout << Mihai << "\n";
        Entity A(2, 3, 5, 6, "Silver", "player");
        Entity B(3, 5, 100, 9, "Crow", "enemy");
        std::cout << A;
        std::cout << std::endl;
        std::cout << B;
        std::cout << std::endl;
        A.MoveEntity(A, 2, 3);
        std::cout << A;
        std::cout << std::endl;
        B.AttackEntity(A, 1);
        std::cout << B;
        std::cout << std::endl;
        Item Branza("Branza", 23, "rar");
        std::cout << Branza;
        std::cout << std::endl;
        User Utilizator("Weisz", "parola123", "985567");
        std::cout << Utilizator;
        std::cout << std::endl;
        Player Silviu(5, 5, 5, 5, "StarShine", "player", Utilizator);
        std::cout << Silviu;
        std::cout << std::endl;
         Entity *p;

        p= &Silviu;
         p->MoveEntity(Silviu,2,2);
         p->AttackEntity(Silviu,2);
         std::cout<<"test functii virtuale"<< Silviu;
         std::cout << std::endl;

         Silviu.MoveEntity(Silviu, 10, 10);
        std::cout << Silviu;
        std::cout << std::endl;
        B.AttackEntity(Silviu, -1);
        std::cout << B;
        std::cout << std::endl;
        std::cout << Silviu;
        std::cout << std::endl;
        Item Keychain("Brocoli", 35, "common");
        Silviu.AddItem( std::make_shared<Item>(Keychain) );
        Silviu.AddItem( std::make_shared<Item>(Branza) );
        std::cout<< Silviu ;
        Silviu.MoveEntity(Silviu, 101, 10);

     }  catch(Eroare_miscare& Eroare) {std::cout << Eroare.what();}
     catch(Eroare_entity& Eroare) {std::cout << Eroare.what();}
catch (Eroare_attack& Eroare) {std::cout << Eroare.what();}





}
