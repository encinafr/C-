#include "Gato.h"

Gato::Gato(string nom,string id,int peso):Animal(nom,id),Peso(peso)
{
    //ctor
}
void Gato:: setPeso(int peso)
{
    Peso = peso;
}
int Gato:: getPeso()
{
    return Peso;
}
string Gato:: toString()
{
     stringstream s;
     s<<Animal::toString();
     s<<"Peso :"<<Peso;
     return s.str();
}
void Gato:: haceRuido()
{
    cout<<"Miau... MIau"<<endl;
}

Gato::~Gato()
{
    //dtor
}
