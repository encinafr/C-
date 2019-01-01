#ifndef NODO_H
#define NODO_H
#include "Animal.h"

class Nodo
{
    public:
        Nodo(Animal *,Nodo *);

        void setAnimal(Animal *);
        Animal *obtenerAnimal();
        void setSig(Nodo *);
        Nodo *obtenerSig();

        virtual ~Nodo();

    private:
        Animal *Ani;
        Nodo *Sig;
};

#endif // NODO_H
