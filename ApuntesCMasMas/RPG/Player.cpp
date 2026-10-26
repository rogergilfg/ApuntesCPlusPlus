#include "Player.h"
#include <iostream>

int main()
{
    Player jugador;
    jugador.vida = 100;
    jugador.mana = 50;
    jugador.velocidad = 20;
    jugador.damage = 5;
    
    std::cout << "| Vida: " << jugador.vida << " | Maná: " << jugador.mana << " | Velocidad: " << jugador.velocidad << " | Damage: " << jugador.damage << std::endl;
}
