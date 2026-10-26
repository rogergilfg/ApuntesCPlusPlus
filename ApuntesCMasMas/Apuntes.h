#pragma once
#include <string>

class Apuntes
{
public:
    int pepe;
    float pepefloat;
    bool pepebool;
    char pepechar;
    std::string pepe5; //Textos string tienen su propia libreria y vienen de la clase "std" (Standard)
    int numbers[]; //Los arrays se les pone los corchetes al final del nombre de la variable, en lugar de antes
    
    void Ejemplo();
    int calculoDamage(int damage);
    
};
