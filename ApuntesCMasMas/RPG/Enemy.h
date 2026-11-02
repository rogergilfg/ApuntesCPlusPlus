#pragma once
#include <iostream>
#include <string>

class Enemy
{
public:
    int eta;
    
    virtual void Attack()=0;
    
    /*Enemy()//CONSTRUCTOR
    {
        //Aqui puedo poner todo lo que quiero que haga el enemy
        //Codigo cuando pongo un new Enemy();
        std::cout << "Me creo";
    }
    
    ~Enemy()//DESTRUCTOR
    {
        //Aqui se ejecutara cuando deje de existir
        std::cout << "Me destruyo";
    }*/
};
