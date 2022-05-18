#pragma once
#include <iostream>
#include <string.h>
#include "persona.h"
#include "bicicleta.h"

using namespace std;

class Dummy{
    public:
        Bicicleta CrearBicicleta(); 
    private: 
        string CrearColor(); 
        string CrearMarca(); 
        string CrearSerial(); 
        string CrearNombre(); 
        int CrearTelefono(); 
        Persona CrearPersona(); 
}; 