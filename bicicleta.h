#pragma once
#include "persona.h"
#include <iostream>
#include <string.h>

using namespace std;

class Bicicleta
{
    public:
        Bicicleta();
        Bicicleta(string marca, string serial, char color, Persona *dueno);
        ~Bicicleta();
        string toString(){}
        void setColor(char Color);
        void setMarca(string Marca);
        void setSerial(string Serial);
        void setDueno(Persona *Dueno);
        char getColor();
        string getMarca();
        string getSerial();
        string getDueno();
    private:
        char Color;
        string Marca;
        string Serial;
        Persona *Dueno;
};