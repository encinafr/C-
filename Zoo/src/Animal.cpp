#include "Animal.h"


Animal::Animal(string nom, string id):Nombre(nom), Id(id)
{
//es igual a Nombre = nom;
}


void Animal::setNombre(string nom)
{
    Nombre = nom;
}

string Animal::getNombre()
{
    return Nombre;
}

string Animal::getId()
{
    return Id;
}



void Animal::haceRuido()
{
    cout<<"Ruido"<<endl;
}

string Animal::toString()
{
    stringstream s;
    s<<"Nombre-----------:  "<<Nombre<<endl;
    s<<"Identificador----:  "<<Id<<endl;
    return s.str();
}

Animal::~Animal()
{
    //dtor
}
