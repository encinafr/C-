#ifndef PERRO_H
#define PERRO_H
#include "Animal.h"

class Perro:public Animal
{
    public:
        Perro(string, string, int);
        void setEdad(int);
        int getEdad();
        string toString();
        void haceRuido();
         ~Perro();


    private:
        int Edad;
};

#endif // PERRO_H
