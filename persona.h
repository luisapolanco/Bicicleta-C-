#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona
{
    public:
        Persona();
        Persona(int Tel, string Nom);
        ~Persona();
        string toString(){}
        void setTelefono(int Tel){}
        int getTelefono(){}
        void setNombre(string Nom){}
        string getNombre(){}
    private:
        int Telefono;
        string Nombre;
};