#include "Enemy.h"

int enemy;

void Enemy::Attack()
{
    std::cout << "Ataque base\n";
    
    /*int damage = 5; //Variables locales, que se eliminan al terminar el metodo
    
    int *damage2 = new int(4); //Variables dinamicas, que gestionamos nosotros cuando se destruyen
    Enemy* enemy = new Enemy();
    int* numeros = new int[5] {1,2,3,4,5};
    
    delete enemy;
    enemy = nullptr;
    
    delete[] numeros;
    numeros = nullptr;
    
    //Memory Leak (que se llena la memoria RAM)
    
    Enemy* ferran = new Enemy();
    
    //Si despues no se elimina la variable ferran, seguirá en la memoria hasta que se cierre el programa
    //SIEMPRE HACER DELATE DE LAS VARIABLES DINAMICAS O CON UN CONSTRUCTOR
    
    //Puntero Colgante (Dangling Pointer)
    
    Enemy* lamine = new Enemy();
    delete lamine;
    
    //Si no le indicamos al puntero que es nilptr, sigue reservando ese espacio en la memoria
    
    //DOBLE DELETE (Doble Liberación)
    //delete lamine; //ERROR ROJO, de los que detienen la ejecucion
    lamine = nullptr;
    delete lamine;//Si el puntero ya nom apunta a ningun lado, no sabe que eliminar
    
    //PERDER REFERENCIA PUNTERO
    Enemy* paco = new Enemy();
    
    //Auto gestón de variables
    //Crear puntero unico
    std::unique_ptr<Enemy> enemigo = std::make_unique<Enemy>();
    //Se comportara como una variable local. Puntero unico.
    
    //auto se cualquier variable (var)
    auto maricon2 = std::move(enemigo); //El puntero anterior se elimina y se crea una nueva que apunta a la variable
    
    
    //1 - C
    //2 - B
    //3 - C
    //4 - */
}
