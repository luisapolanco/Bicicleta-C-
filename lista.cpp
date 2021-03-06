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

/*
Nodo* Lista::agregarOr(Nodo *cab, Nodo *nuevoItem)
{
    if(cab == NULL )
    {
        return cab; 
    }
    else
    {
        string colorTemp = {cab->dato->getColor()};
        string colorItem = {nuevoItem->dato->getColor()};
        int res = colorTemp <= colorItem;
        cout  << res << "Holaaaa"<< endl;
        if(res == 0)
        {
            nuevoItem->id = this->nodoId;
            Nodo *temp = cab; 
            cab = nuevoItem;
            cab->next = temp; 
            nodoId = nodoId + 1;
            return cab;
        } 
        if (cab->next == NULL) {
            nuevoItem->id = this->nodoId;
            cab->next = nuevoItem;
            nodoId = nodoId + 1;
            return cab;
        }      
        return agregarOr(cab->next, nuevoItem );                 
    }
}
// */


void Lista::agregarOr(Nodo *&cab, Bicicleta bici)
{
    cout << "agregarOr" << endl;
    Nodo *nuevoNodo = new Nodo(bici); 
    //nuevoNodo->dato = bici;

    Nodo *aux1 = cab; 
    Nodo *aux2; 

    while((aux1 != NULL) && (aux1->dato.getColor() < bici.getColor())){
        aux2 = aux1;
        aux1 = aux1->next;
    }

    if(cab == aux1){
        cab = nuevoNodo;
    }
    else{
        aux2->next = nuevoNodo;
    }

    nuevoNodo->next = aux1; 

    // if(cab == NULL )
    // {
    //     cab = nuevoItem; 
    //     cout << "cab: " << cab->dato->getColor() << endl;
    //     cout << "iten: " << nuevoItem->dato->getColor() << endl; 
    //     cout << "######### ingreso en cabeza" << endl;   
    // }
    // else {
    //     cout<< "----------------- En el else.." << endl;
    // if(nuevoItem->dato->getColor() < cab->dato->getColor())
    // {
    //     cout << "####### color antes de cabeza" << endl;
    //     nuevoItem->next = cab;
    //     cab = nuevoItem;
    // }
    // else
    // {
    //     Nodo* x = cab;
    //     while (x->next != NULL){
    //         if(x->next->dato->getColor() < nuevoItem->next->dato->getColor())
    //         {
    //             nuevoItem->next = x->next;
    //             x->next = nuevoItem;
    //         }
    //         else if (x->next->dato->getColor() > nuevoItem->next->dato->getColor())
    //         {
    //             nuevoItem->next = x;
    //             x = nuevoItem;
    //             break;
    //         }
    //         x = x->next;
    //         /*if(res == 0)
    //         {
    //             nuevoItem->id = this->nodoId;
    //             //Nodo *temp = cab; 
    //             cab = nuevoItem;
    //             cab->next = temp; 
    //             nodoId = nodoId + 1;
    //             return cab;
    //         } 
    //         if (cab->next == NULL) {
    //             nuevoItem->id = this->nodoId;
    //             cab->next = nuevoItem;
    //             nodoId = nodoId + 1;
    //             return cab;
    //         }*/           
    //     }            
    // }
    // }
    // cout << "-------------- saliedo de agregar "<< endl;
}


void Lista::AgregarPrimero(Nodo *cab, Nodo *nuevoItem)
{    
    //nuevoItem->next = cab;
    this->cab = nuevoItem;
    //nuevoItem->id = this->nodoId; 
    //this->nodoId = this->nodoId + 1;
    //return this->cab; 
}


void Lista:: verDatos(Nodo *&cab)   
{
    Nodo *actual = new Nodo();
    actual = this->cab; 
    while(actual != NULL)
    {        
        cout<<"Enel while"<< endl; 
        actual->dato.toString();
        cout<<"--->"<<endl;
        actual = actual->next;
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

Nodo* Lista :: Eliminar(Nodo *cab, int id, int j, Nodo *nodoPrevio ){
    int cantidad = this->contarLista(); 
    if(id > cantidad)
    {
        cout<<"El n??mero es mayor al tama??o de la lista"<< endl; 
        return cab; 
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
            Eliminar(cab->next, id, j + 1, NULL);
            return cab; 
    }
}
}

