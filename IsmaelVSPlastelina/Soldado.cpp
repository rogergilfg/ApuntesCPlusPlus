#include "Soldado.h"
#include <iostream>

#include "Arquero.h"

int main()
{
    Soldado soldier;
    Arquero archer;
    
    soldier.receiveDamage(100);
    
    soldier.attack(archer);
    
    if (soldier.isAlive())
    {
        std::cout << "Sigue vivo\n";
    }else
    {
        std::cout << "Ha muerto\n";
    }
    
    if (archer.isAlive())
    {
        std::cout << "El arquero sigue vivo\n";
    }
    else
    {
        std::cout << "El arquero ha muerto\n";
    }
}
