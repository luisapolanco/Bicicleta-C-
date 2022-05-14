#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "persona.h"
#include "dummy.h"
#include "bicicleta.h"
using namespace std;

Bicicleta Dummy::CrearBicicleta(){
    char color = CrearColor(); 
    string marca = CrearMarca(); 
    string serial = CrearSerial(); 
    Persona persona = CrearPersona();
    Bicicleta *bici = new Bicicleta(marca, serial, color, &persona); 
    return *bici;
}

char Dummy::CrearColor(){
    srand(time(NULL)); 
    int randNum = rand()%6 + 0; 
    char colores[6] = {'azul', 'amarillo', 'rojo', 'rosado', 'verde', 'negro'}; 
    return colores[randNum]; 
} 

string Dummy::CrearMarca(){
    srand(time(NULL)); 
    int randNum = rand()%5 + 0; 
    string marcas[5] = {"GW", "Trek", "Scott", "Shimano", "Giant"}; 
    return marcas[randNum]; 
}

string Dummy::CrearSerial(){
    srand(time(NULL)); 
    int randNum = rand()%5 + 0; 
    string seriales[5] = {"ABC123", "UVW456", "OPQ678", "LMN487", "EFG095"}; 
    return seriales[randNum]; 
}

string Dummy::CrearNombre(){
    srand(time(NULL)); 
    int randNum = rand()%7 + 0; 
    string nombres[7] = {"Luis", "Miguel", "Alejandro", "Andrea", "Juliana", "Valentina", "Roberto"}; 
    return nombres[randNum]; 
}

int Dummy::CrearTelefono(){
    srand(time(NULL)); 
    int randNum = rand()%5 + 0;
    int telefonos[6] = {2452525, 252525, 744844, 985588, 252669, 563737}; 
    return telefonos[randNum]; 
}

Persona Dummy::CrearPersona(){
    int telefono = CrearTelefono(); 
    string nombre = CrearNombre(); 
    Persona *persona = new Persona(telefono, nombre);
    return *persona;
}





