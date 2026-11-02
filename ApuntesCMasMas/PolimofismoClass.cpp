#include "PolimofismoClass.h"

PolimofismoClass poli;

int main()
{
    poli.enemy1.Attack();
    poli.enemy2.Attack();
    
    poli.niggas.push_back(new Goblin());
    poli.niggas.push_back(new Mago());
    
    for (int i = 0; i < poli.niggas.size(); i++)
    {
        poli.niggas[i]->Attack();
    }
}
