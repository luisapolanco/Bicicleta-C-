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
        Nodo* agregarOr(Nodo *cab, Nodo *nuevoItem){}
        void AgregarPrimero(Nodo *cab, Nodo *nuevoItem){}
        Nodo* Eliminar(Nodo *cab, int id, int j, Nodo *nodoPrevio = NULL){}
        int contarLista(){}
        void verDatos(){}
}; 