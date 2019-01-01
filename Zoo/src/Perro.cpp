#include "Perro.h"



Perro::Perro(string nom, string id, int edad):Animal(nom, id),Edad(edad){

}

 void Perro::setEdad(int edad)
 {
     Edad = edad;
 }
 int Perro::getEdad()
 {
     return Edad;
 }
 string Perro::toString()
 {
     stringstream s;
     s<<Animal::toString();
     s<<"Edad :"<<Edad;
     return s.str();
 }
 void Perro::haceRuido()
 {
     cout<<"Guau... guau"<<endl;
 }

Perro::~Perro()
{
    //dtor
}
