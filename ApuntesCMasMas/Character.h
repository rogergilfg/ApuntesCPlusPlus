#pragma once
#include <functional>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

class Character
{
public:
    
    enum ListenerType { Damage, Attack, Move };
    
    std::vector<function<void()>> listenersDamage;
    std::vector<function<void()>> listenersAttack;
    std::vector<function<void()>> listenersMove;
    
    void AddListener(ListenerType listenerType, function<void()> listener)
    {
        listenersDamage.push_back(listener);
    }

    
    void PlayListeners(){}
    
    void TakeDamage()
    {
        std::cout << "TakeDamage" << std::endl;
        
    }
    
    void Attack()
    {
        std::cout << "Attack" << std::endl;
    }
    
    void Movement()
    {
        std::cout << "Movement" << std::endl;   
    }
    
};
