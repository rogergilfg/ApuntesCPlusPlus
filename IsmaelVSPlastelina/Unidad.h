#pragma once
#include <string>

class Unidad
{

protected:
    
    std::string name;
    int life;
    int damage;
    int defense;
    
public:
    Unidad(std::string n, int l, int d, int def)
    {
        name = n;
        life = l;
        damage = d;
        defense = def;
    }
    
    void receiveDamage(int amount);
    
    bool isAlive();
    
    void attack(Unidad& target)
    {
        target.receiveDamage(damage);
    }
};
