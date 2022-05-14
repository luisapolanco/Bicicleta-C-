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
                Nodo *nodo = new Nodo(bicicleta); 
                lista->agregarOr(nodo); 
            break;

            case 2: cout<<"Elegiste eliminar";

            break;

            case 3: cout<<"elegiste ver los datos";
        
            break;

            case 4: cout<<"elegiste contar";
        
            break;

            case 5: cout<<"elegiste ordenar";
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
        lista->agregarOr(nodo); 
    }
    return *lista; 
}