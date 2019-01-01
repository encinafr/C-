#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"


class Lista
{
    public:
        Lista();
        void add(Animal *);
        string toString();
        virtual ~Lista();

    private:
        Nodo *Primero;
};

#endif // LISTA_H
