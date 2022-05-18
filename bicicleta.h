#pragma once
#include "persona.h"
#include <iostream>
#include <string.h>

using namespace std;

class Bicicleta
{
    public:
        Bicicleta();
        Bicicleta(string marca, string serial, string color, Persona *dueno);
        ~Bicicleta();
        string toString(); 
        void setColor(string Color);
        void setMarca(string Marca);
        void setSerial(string Serial);
        void setDueno(Persona *Dueno);
        string getColor();
        string getMarca();
        string getSerial();
        string getDueno();
    private:
        string Color;
        string Marca;
        string Serial;
        Persona *Dueno;
};