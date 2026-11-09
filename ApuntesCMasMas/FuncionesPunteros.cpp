#include "FuncionesPunteros.h"

#include <functional>
#include <iostream>

FuncionesPunteros apuntes;

class EjemploUI
{
    public:
    
    void UpdateUI()
    {
        std::cout << "Nueva UI\n";
    }
};

    class AudioManager
{
    public:
        
        void PlaySFX()
        {
            std::cout << "Reproduciendo sonido\n";
        }
};

class Player
{
    public:
    
    void Character()
    {
        std::cout << "Aqui esta el player\n";
    }
};


    /*int main()
    {
        //apuntes.ExecuteFunction(apuntes.Hello);
        
        //Lambdas
        auto SayHello = []()
        {
            std::cout << "Hello World!\n";
        };
        // [] Variables Externas
        // () Parametros de la funcion
        // {} Codigo que ejecutará
        
        //std::function<void>()> Prueba;
        
        apuntes.ExecuteFunction(SayHello);
        
        EjemploUI ui;
        AudioManager audioManager;
        Player player;
        
        apuntes.enemy.AddListener([&ui]()
        {
            ui.UpdateUI();
        });
        
        apuntes.enemy.AddListener([&audioManager]()
        {
           audioManager.PlaySFX(); 
        });
        
        apuntes.enemy.AddListener([&player]()
        {
            player.Character();
        });
    }

void FuncionesPunteros::ExecuteFunction(void (*function)())
    {
        function();
    }*/
