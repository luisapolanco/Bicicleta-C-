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
        void setNombre(string Nom);
        void setTelefono(int Tel); 
        string getNombre(); 
        int getTelefono(); 
        string toString(); 
    private:
        int Telefono;
        string Nombre;
};