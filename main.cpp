#include <string.h>
#include <iostream>
#include "bicicleta.h"
#include "nodo.h"
#include "lista.h"
#include "dummy.h"
#include "persona.h"
using namespace std;

//void GetMenu(Lista *lista); 
//Lista GetDummies(); 

int vermenu(){
    int numero = 9;
    cout<<"Elegir un numero"<<endl;
    cout<<"Opcion 1: agregar ordenado"<<endl;
    cout<<"Opcion 2: eliminar"<<endl;
    cout<<"Opcion 3: ver datos disponibles"<<endl;
    cout<<"Opcion 4: contar numero de datos"<<endl;
    cout<<"Opcion 5: Salir"<<endl; 
    cin>>numero;
    return numero;
}

  Bicicleta* crearDatosBici(){
        string color;
        string marca;
        string serial; 
        string nombre; 
        int telefono; 
        Persona* persona; 
        Bicicleta* bicicleta; 
            cout << "Ingrese color: "; 
            cin>>color;
            cout << "Ingrese Marca: ";
                cin>>marca; 
            cout << "Ingrese Serial: ";
                cin>>serial;
            cout << "Ingrese nombre: ";
                cin>>nombre; 
            cout << "Ingrese telefono: ";
                cin>>telefono; 

            persona = new Persona(telefono, nombre);
            bicicleta = new Bicicleta(marca, serial, color, persona);
            return bicicleta;
  }

void GetMenu(Lista *lista){
    bool var = true; 
    while(var){
        //int numero;
        //string color;
        //string marca;
        //string serial; 
        //string nombre; 
        //int telefono; 
        Nodo *nodo; 
        Nodo *nodoNuevo; 
        //Persona *persona; 
        //Bicicleta *bicicleta; 
        int id; 
       
        switch (vermenu()){
            case 1: cout<<"Elegiste agregar ordenado" << endl;                 
                nodo = new Nodo(crearDatosBici()); 
                lista->agregarOr(lista->cab, nodo); 
                lista->cab = nodoNuevo;
                cout << lista->cab->dato->getMarca()<< endl; 
                break;            
            case 2:
                cout<<"Elegiste eliminar"<<endl;
                cout <<"Ingrese Id de Bicicleta que desea elmininar"<<endl; 
                cin>>id; 
                //nodo = lista->Eliminar(lista->cab, id, 0, NULL); 
                //lista->cab = nodo; 
                break; 
            case 3: cout<<"Elegiste ver los datos"<<endl;
                lista->verDatos(); 
                break; 
            case 4: 
                cout<<"Elegiste contar" << endl;
                cout << lista->contarLista() << endl;
                break; 
            case 5: cout<<"Elegiste SALIR" <<endl;
                var = false; 
                break; 
            default: cout<<"no es una opcion, Itenta nuevamete :) "<< endl;


        }
    }
    
}

Lista* GetDummies(){
    Lista* lista = new Lista(); 
    Dummy* dummy = new Dummy(); 
    for(int i=0; i<=3; i+=1)
    {
        Bicicleta bici = dummy -> CrearBicicleta();
        cout << bici.toString()<< endl; 
        Nodo *nodo = new Nodo(&bici); 
        //if(i == 0){
            //lista->AgregarPrimero(lista->cab, nodo);
        //}else{
            cout << " cabeza antes de llamar al metodo: " << lista->cab << endl;
            Nodo* cabeza = lista->cab;
            cabeza = nodo;
            lista->agregarOr(cabeza, nodo); 
            cout << "--- mostrar color" << endl;
            cout << " cabeza: " << lista->cab << endl;
            cout << " dato: " << lista->cab->dato << endl;
            
            cout << lista->cab->dato->getColor() << endl;
        //}
    }
    return lista; 
}


int main(){
    Lista* lista = GetDummies(); 
    GetMenu(lista);
    return 0; 
}
