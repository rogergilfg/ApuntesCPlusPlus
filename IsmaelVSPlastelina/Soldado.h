#pragma once
#include <iostream>

#include "Unidad.h"

class Soldado : public Unidad

{
public:
    Soldado() : Unidad("Soldado", 50, 20, 10)
    {
        
    }
};
