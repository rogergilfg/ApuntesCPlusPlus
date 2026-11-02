#include "Unidad.h"

bool Unidad::isAlive()
{
    return life > 0;
}

void Unidad::receiveDamage(int amount)
{
    int realDamage = amount - defense;
    
    if (realDamage < 0)
    {
        realDamage = 0;
    }
    
    life = life - realDamage;
}