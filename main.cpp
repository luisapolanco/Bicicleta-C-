#include <string.h>
#include <iostream>
#include "bicicleta.h"
#include "nodo.h"
#include "lista.h"
#include "dummy.h"
#include "persona.h"
using namespace std;

int main(){
    Lista lista = GetDummies(); 
    GetMenu(&lista);
    return 0; 
}

void GetMenu(Lista *lista){
    bool var = true; 
    while(var){
        int numero;
        char color;
        string marca;
        string serial; 
        string nombre; 
        int telefono; 
        Nodo *nodo; 
        Nodo *nodoNuevo; 
        int id; 
        cout<<"Elegir un numero";
        cout<<"Opcion 1: agregar ordenado";
        cout<<"Opcion 2: eliminar";
        cout<<"Opcion 3: ver datos disponibles";
        cout<<"Opcion 4: contar numero de datos";
        cout<<"Opcion 5: Salir"; 
        cin>>numero;

        switch (numero){
            case 1: cout<<"Elegiste agregar ordenado"; 
                cin>>color;
                cin>>marca; 
                cin>>serial;
                cin>>nombre; 
                cin>>telefono; 
                Persona *persona = new Persona(telefono, nombre);
                Bicicleta *bicicleta = new Bicicleta(marca, serial, color, persona);
                nodo = new Nodo(bicicleta); 
                nodoNuevo = lista->agregarOr(lista->cab, nodo); 
                lista -> cab = nodoNuevo; 
                break;               
            case 2: cout<<"Elegiste eliminar";
                cout <<"Ingrese Id de Bicicleta que desea elmininar"<<endl; 
                cin>>id; 
                nodo = lista->Eliminar(lista->cab, id, 0); 
                lista -> cab = nodo; 
                break;

            case 3: cout<<"Elegiste ver los datos";
                lista->verDatos(); 
                break;

            case 4: cout<<"Elegiste contar";
                lista->contarLista(); 
                break;

            case 5: cout<<"Elegiste SALIR";
                var = false; 
                break;
            default: cout<<"no es una opcion";
                break;


        }
    }
    
}

Lista GetDummies(){
    Lista *lista = new Lista(); 
    for(int i=0; i<=101; i+=1)
    {
        Dummy *dummy = new Dummy(); 
        Bicicleta bici = dummy -> CrearBicicleta(); 
        Nodo *nodo = new Nodo(&bici); 
        if(i == 0){
            lista->AgregarPrimero(lista->cab, nodo);
        }else{
            Nodo *nuevaCabeza = lista->agregarOr(lista-> cab, nodo); 
            lista->cab = nuevaCabeza;
        }
    }
    return *lista; 
}