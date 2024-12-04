#include <iostream>
#include "Zombie.hpp"

void randomChump(std::string name);
Zombie *newZombie(std::string name);

int    main()
{
    std::cout << "STACK ZOMBIES" << std::endl;
    Zombie zombie1("\tFernando");           //Dies once we reach the end of main
    Zombie zombie2("\tToino");              //Dies once we reach the end of main
    zombie1.announce();
    zombie2.announce();
    randomChump("\tMiguel");                 //Dies once we reach the end of the function randomChump()

    std::cout << "\nHEAP ZOMBIES" << std::endl;
    Zombie *zombie3 = new Zombie("\tAntonieta");    //Dies once we free the memory of that zombie
    Zombie *zombie4 = new Zombie("\tNapoleao");     //Dies once we free the memory of that zombie
    zombie3->announce();
    zombie4->announce();
    delete(zombie4);
    delete(zombie3);
    return 0;
}