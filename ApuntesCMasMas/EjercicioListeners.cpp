#include "EjercicioListeners.h"

#include <iostream>

int main()
{
    
}

void EjercicioListeners::Ask()
{
    std::cout<<"¿Que quieres ejecutar? | TakeDamage: 1 | Attack: 2 | Movement: 3 | Salir: 4"<<std::endl;
    std::string answer;
    cin>>answer;
    
    if(answer=="1")
    {
        std::cout<<"Has recibido daño\n";
        player.TakeDamage();
        Ask();
    }
    else if(answer=="2")
    {
        std::cout<<"Atacas con fuerza\n";
        player.Attack();
        Ask();
    }
    else if(answer=="3")
    {
       std::cout<<"Te mueves hacia delante\n"; 
       player.Movement();
       Ask();
    }
    else if(answer=="4")
    {
        std::cout<<"Has salido\n";
    }
}
