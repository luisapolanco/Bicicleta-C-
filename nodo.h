#pragma once
#include <string.h>
#include <iostream>
#include "bicicleta.h"
using namespace std;

class Nodo{
    public:
        Bicicleta *dato;
        Nodo *next;
        int id; 
        Nodo(){}
        Nodo(Bicicleta *Bici,Nodo *next);
        Nodo(Bicicleta *Bici);
        void toString();
        ~Nodo();
};