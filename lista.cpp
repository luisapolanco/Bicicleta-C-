#include <string.h>
#include <iostream>
#include "bicicleta.h"
#include "nodo.h"
#include "lista.h"
using namespace std;

Lista :: Lista()
{
    this->cab = NULL; 
}

Nodo* Lista::agregarOr(Nodo *cab, Nodo *nuevoItem)
{
    if(cab == NULL )
    {
        return cab; 
    }
    else
    {
        char colorTemp[] = {cab->dato->getColor()};
        char colorItem[] = {nuevoItem->dato->getColor()};
        int res = strcmp(colorTemp, colorItem);
        if(res == 0)
        {
            nuevoItem->id = this->nodoId;
            nuevoItem->next = cab->next;
            cab->next = nuevoItem;
            nodoId = nodoId + 1;
            return cab;
        }
        else if(res > 0)
        {
            nuevoItem->id = this->nodoId;
            Nodo *temp = cab; 
            cab = nuevoItem;
            cab->next = temp; 
            nodoId = nodoId + 1;
            return cab;
        }
        return agregarOr(cab->next, nuevoItem );         
    }
}

void Lista::AgregarPrimero(Nodo *cab, Nodo *nuevoItem)
{    
    nuevoItem->next = cab;
    cab = nuevoItem;
    nuevoItem->id = this->nodoId; 
    this->nodoId = this->nodoId + 1;
}


void Lista:: verDatos()
{
    Nodo *temp = this->cab;
    while(temp->next != NULL)
    {
        cout<<temp->dato->toString()<<endl;
        cout<<"--->"<<endl;
        temp = temp->next;
    }
}

int Lista:: contarLista()
{
    Nodo *temp = this->cab;
    int contador = 0;
    while(temp->next != NULL)
    {
        contador = contador + 1;
        temp = temp->next;
    }
    return contador;
}

Nodo* Lista :: Eliminar(Nodo *cab, int id, int j, Nodo *nodoPrevio = NULL){
    int cantidad = this->contarLista(); 
    if(id > cantidad)
    {
        cout<<"El número es mayor al tamaño de la lista"<< endl; 
    }
    else
    {
        if(cab == NULL){
            return cab;
        }
        else if (id - 1 == j){
            Eliminar(cab->next, id, j + 1, cab);
            return cab; 
        }else if (id == j){
            nodoPrevio -> next = cab -> next; 
            return nodoPrevio; 
        }
        else{
            Eliminar(cab->next, id, j + 1);
            return cab; 
    }
}
/*int Lista:: BuscarObjeto()
{
    Nodo* temp = this->cab; 
    while(temp){
        temp->dato->toString(); 
    }
}*/
