#include "Unidad.h"
#include <iostream>

#include "Ejercito.h"

int main()
{
    Ejercito armyA;
    
    Unidad soldier("Soldado", 50, 20, 15);
    Unidad archer("Archer", 40, 30, 5);
    Unidad mago("Mago", 20, 50, 10);
    
    armyA.addTroop(soldier, 20);
    armyA.addTroop(archer, 20);
    armyA.addTroop(mago, 20);
    
    std::cout << "Unidades del ejercito A = " << armyA.getSize() << "\n";
}
