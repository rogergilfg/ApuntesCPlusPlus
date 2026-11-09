#pragma once
#include "EnemyFuncionesPunteros.h"

class FuncionesPunteros
{
public:
    EnemyFuncionesPunteros enemy;   
    void ExecuteFunction(void (*function)());
};
