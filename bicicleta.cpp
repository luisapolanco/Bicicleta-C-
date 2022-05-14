#include "persona.h"
#include <iostream>
#include <string.h>
#include "bicicleta.h"
using namespace std; 

Bicicleta:: Bicicleta(string marca, string serial, char color, Persona *dueno)
{
    this->Color = color; 
    this->Marca = marca; 
    this->Serial = serial; 
    this->Dueno = dueno; 
}

Bicicleta:: ~Bicicleta()
{
    cout << "*se muere*"<< endl;
}

void Bicicleta:: setColor(char Color)
{
    this->Color = Color;
}

void Bicicleta:: setMarca(string Marca)
{
    this->Marca = Marca;
}

void Bicicleta:: setSerial(string Serial)
{
    this->Serial = Serial;
}

void Bicicleta:: setDueno(Persona *Dueno)
{
    this->Dueno = Dueno;
}

char Bicicleta:: getColor()
{
    return this->Color;
}

string Bicicleta:: getMarca()
{
    return this->Marca;
}

string Bicicleta:: getSerial()
{
    return this->Serial;
}

string Bicicleta:: getDueno()
{
    return this->Dueno->toString();
}

string Bicicleta:: toString()
{
    string texto = "Color: "+to_string(this->Color)+", Marca: "+this->Marca+", Serial: "+this->Serial+", Informacion dueno"+this->Dueno->toString();
    return texto;
}