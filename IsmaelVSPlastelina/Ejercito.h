#pragma once
#include <vector>

#include "Unidad.h"

class Ejercito
{
protected:
    std::vector<Unidad> troops;
    
public:
    void addTroop(Unidad troop, int count)
    {
        for (int i = 0; i < count; i++)
        {
            troops.push_back(troop);
        }
    }
    
    int getSize()
    {
        return troops.size();
    }
    
};
