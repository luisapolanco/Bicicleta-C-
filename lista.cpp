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

void Lista::agregarOr(Nodo *item)
{
    if(this->cab == NULL)
    {
        item->next = this->cab;
        this->cab = item;
        item->id = nodoId; 
        nodoId = nodoId + 1;
    }
    else{
        Nodo *temp = this->cab;
        while(temp != NULL){
            char colorTemp[] = {temp->dato->getColor()};
            char colorItem[] = {item->dato->getColor()};
            int res = strcmp(colorTemp, colorItem);
            if(res == 0)
            {
                item->id = this->nodoId;
                item->next = temp->next;
                this->cab->next = item;
                nodoId = nodoId + 1;
            }
            else if(res > 0)
            {
                item->id = this->nodoId;
                this->cab = item;
                this->cab->next = temp;
                nodoId = nodoId + 1;
            }
            temp = temp->next;
        }
    }
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

Nodo Lista::Eliminar(Nodo *cab, int id, int j, Nodo nodoPrevio){
    int cantidad = this->contarLista(); 
    if(id > cantidad)
    {
        cout<<"El número es mayor al tamaño de la lista"<< endl; 
    }
    else
    {
        if(cab == NULL){
            return *this->cab;
        }
        else if (id - 1 == j){
            Eliminar(cab->next, id, j + 1, cab);
            return *this->cab; 
        }
        
       
    elif posicion == j:
        if posicion == 1:
            return head.next
        else:
            nodoprevio.next = head.next
            return nodoprevio    
    else:
        borrar(head.next, posicion, j +1)
        return head
    }
}
/*int Lista:: BuscarObjeto()
{
    Nodo* temp = this->cab; 
    while(temp){
        temp->dato->toString(); 
    }
}*/


def borrar(head: Node, posicion: int, j = 1, nodoprevio = Node):
    if head == None:
        return head
    elif posicion - 1 == j:
        borrar(head.next, posicion, j + 1, head)
        return head
    elif posicion == j:
        if posicion == 1:
            return head.next
        else:
            nodoprevio.next = head.next
            return nodoprevio    
    else:
        borrar(head.next, posicion, j +1)
        return head