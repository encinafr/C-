#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato:public Animal
{
    public:
        Gato(string, string, int);
        void setPeso(int);
        int getPeso();
        string toString();
        void haceRuido();
        virtual ~Gato();


    private:
        int Peso;
};

#endif // GATO_H
