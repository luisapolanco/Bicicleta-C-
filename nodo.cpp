#include <iostream>
#include <string.h>
#include "Nodo.h"
#include "bicicleta.h"
using namespace std;

Nodo::Nodo(Bicicleta *Bici,Nodo *next)
{
    this->dato = Bici;
    this->next = next;
}

Nodo::Nodo(Bicicleta *Bici)
{ 
    this->dato = Bici;
    this->next = NULL;
}

void Nodo::toString(){
    cout << this->dato->toString() << endl;
    cout << "El nodo tiene: " << this->next << endl;
}

Nodo::~Nodo(){
    cout << "C mUEre" << endl;
}
