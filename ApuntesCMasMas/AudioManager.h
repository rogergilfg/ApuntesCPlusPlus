#pragma once
#include <iostream>

class AudioManager
{
public:
    void TakeDamage()
    {
        std::cout << "TakeDamage Sound" << std::endl;
    }
    
    void Attack()
    {
        std::cout << "Attack Sound" << std::endl;
    }
    
    void Movement()
    {
        std::cout << "Movement Sound" << std::endl;   
    }
};
