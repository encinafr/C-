#include "Lista.h"

Lista::Lista()
{
    Primero = NULL;
}
 void Lista::add(Animal *ani)
 {
  Primero = new Nodo(ani, Primero);
 }
 string Lista::toString()
 {
     stringstream s;
     Nodo *p = Primero;
     while(p != NULL)
     {
         s<<p->obtenerAnimal()->toString()<<endl;
         p = p->obtenerSig();//Para moverme al siguiente nodo
     }
     return s.str();
 }
Lista::~Lista()
{
    Nodo *p = Primero;
    Nodo *aux = NULL;
    while(p != NULL)
    {
        aux = p->obtenerSig();
        delete p;
        p = aux;  //Elimino todos los nodos
    }
    Primero = NULL;
}
