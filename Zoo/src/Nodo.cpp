#include "Nodo.h"

Nodo::Nodo(Animal *ani,Nodo *sig)
{
    Ani = ani;
    Sig = sig;
}
 void Nodo:: setAnimal(Animal *ani)
 {
     Ani = ani;
 }
Animal *Nodo:: obtenerAnimal(){
    return Ani;
}
void Nodo:: setSig(Nodo *sig)
{
    Sig = sig;
}
Nodo *Nodo::obtenerSig()
{
    return Sig;
}
Nodo::~Nodo()
{
    //dtor
}
