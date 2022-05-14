#pragma once
#include <string.h>
#include <iostream>
#include "bicicleta.h"
#include "nodo.h"
using namespace std;

class Lista
{
    public: 
        Nodo *cab;
        int nodoId = 0; 
        Lista(){}
        void agregarOr(Nodo *item){}
        Nodo Eliminar(Nodo *cab, int id, int j, Nodo nodoPrevio){}
        int contarLista(){}
        void verDatos(){}
}; 