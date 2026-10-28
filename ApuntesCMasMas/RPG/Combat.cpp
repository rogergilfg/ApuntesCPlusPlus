#include "Combat.h"
#include <iostream>
#include <vector>

#include "Player.h"
#include "Enemy.h"

void MostrarEnemigos(std::vector<Enemy> lista)
{
    for (int i = 0; i < lista.size(); i++)
    {
        std::cout << i + 1 << ". " << lista[i].nombre << " | Vida: " << lista[i].vida << " | Mana: " << lista[i].mana << " | Velocidad: " << lista[i].velocidad << " | Damage: " << lista[i].damage << std::endl;
    }
}

int main()
{
    int pociones = 3;
    int vidaMaxima = 150;
    bool defendiendo = false;
    
    Player jugador;
    jugador.vida = 150;
    jugador.mana = 80;
    jugador.velocidad = 20;
    jugador.damage = 10;
    
    Enemy duende;
    duende.nombre = "Duende";
    duende.vida = 30;
    duende.mana = 50;
    duende.velocidad = 30;
    duende.damage = 5;
    
    Enemy ogro;
    ogro.nombre = "Ogro";
    ogro.vida = 80;
    ogro.mana = 30;
    ogro.velocidad = 10;
    ogro.damage = 20;
    
    Enemy mago;
    mago.nombre = "Mago";
    mago.vida = 50;
    mago.mana = 100;
    mago.velocidad = 15;
    mago.damage = 15;
    
    std::vector<Enemy> enemigos;
    enemigos.push_back(duende);
    enemigos.push_back(ogro);
    enemigos.push_back(mago);
    
    MostrarEnemigos((enemigos));
    
    int accion;
    std::cout << "Que quieres hacer?" << std::endl;
    std::cout << "1. Ataque normal" << std::endl;
    std::cout << "2. Bola Ignea" << std::endl;
    std::cout << "3. Martillaso en el ano" << std::endl;
    std::cout << "4. Usar Pocion de Curacion (" << pociones << ")" << std::endl;
    std::cout << "5. Defender" << std::endl;
    std::cin >> accion;
    
    if (accion == 1)
    {
        MostrarEnemigos(enemigos);

        int objetivo = -1;

        while (objetivo < 0 || objetivo >= enemigos.size())
        {
            std::cout << "A que enemigo atacas? (escribe el numero)" << std::endl;
            std::cin >> objetivo;
            objetivo = objetivo - 1;
        }

        enemigos[objetivo].vida = enemigos[objetivo].vida - jugador.damage;

        std::cout << "Has atacado a " << enemigos[objetivo].nombre << ". Le quedan " << enemigos[objetivo].vida << " de vida." << std::endl;
    }
    else if (accion == 2)
    {
        if (jugador.mana >= 20)
        {
            MostrarEnemigos(enemigos);
            int objetivo = -1;
            while (objetivo < 0 || objetivo >= enemigos.size())
            {
                std::cout << "A que enemigo le lanzas una Bola Ignea? (escribe el numero)" << std::endl;
                std::cin >> objetivo;
                objetivo = objetivo - 1;
            }

            enemigos[objetivo].vida = enemigos[objetivo].vida - 25;
            jugador.mana = jugador.mana - 20;

            std::cout << "Has lanzado Bola Ignea a " << enemigos[objetivo].nombre << ". Le quedan " << enemigos[objetivo].vida << " de vida. Te quedan " << jugador.mana << " de mana." << std::endl;
        }
        else
        {
            std::cout << "No tienes mana suficiente." << std::endl;
        }
    }
    else if (accion == 3)
    {
        if (jugador.mana >= 35)
        {
            MostrarEnemigos(enemigos);

            int objetivo = -1;

            while (objetivo < 0 || objetivo >= enemigos.size())
            {
                std::cout << "A que enemigo lanzas el Martillazo en el ano? (escribe el numero)" << std::endl;
                std::cin >> objetivo;
                objetivo = objetivo - 1;
            }

            enemigos[objetivo].vida = enemigos[objetivo].vida - 40;
            jugador.mana = jugador.mana - 35;

            std::cout << "Has lanzado Martillazo en el ano a " << enemigos[objetivo].nombre << ". Le quedan " << enemigos[objetivo].vida << " de vida. Te quedan " << jugador.mana << " de mana." << std::endl;
        }
        else
        {
            std::cout << "No tienes mana suficiente." << std::endl;
        }
    }
    else if (accion == 4)
    {
        if (pociones > 0)
        {
            jugador.vida = jugador.vida + 20;

            if (jugador.vida > vidaMaxima)
            {
                jugador.vida = vidaMaxima;
            }

            pociones = pociones - 1;

            std::cout << "Has usado una Pocion de Curacion. Tu vida es " << jugador.vida << "/" << vidaMaxima << ". Te quedan " << pociones << " pociones." << std::endl;
        }
        else
        {
            std::cout << "No te quedan pociones." << std::endl;
        }
    }
    else if (accion == 5)
    {
        defendiendo = true;
        std::cout << "Te pones en guardia. No recibiras dano hasta tu proximo turno." << std::endl;
    }
    
    //std::cout << "| Vida: " << jugador.vida << " | Maná: " << jugador.mana << " | Velocidad: " << jugador.velocidad << " | Damage: " << jugador.damage << std::endl;
}
