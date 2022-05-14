#include <iostream>
#include <string>
#include "persona.h"
using namespace std;

Persona:: Persona(int Tel, string Nom = "Sin nombre asignado")
{
    this->Telefono = Tel;
    this->Nombre = Nom;   
}

Persona:: ~Persona()
{
    cout<<"me destruyooooooooooooo"<<endl;
}

void Persona:: setNombre(string Nom)
{
    this->Nombre = Nom;
}

void Persona:: setTelefono(int Tel)
{
    this->Telefono = Tel;
}

string Persona:: getNombre()
{
    return this->Nombre;
}

int Persona:: getTelefono()
{
    return this->Telefono;
}

string Persona:: toString()
{
    string telefono;
    string texto = "Nombre: "+this->Nombre+" Telefono:"+to_string(this->Telefono);
    return texto;
}