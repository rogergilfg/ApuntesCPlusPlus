#pragma once
#include <iostream>

class VFX
{
public:
    
    void TakeDamage()
    {
        std::cout << "TakeDamage Particles" << std::endl;
    }
    
    void Attack()
    {
        std::cout << "Attack Particles" << std::endl;
    }
    
    void Movement()
    {
        std::cout << "Movement Particles" << std::endl;   
    }
};
