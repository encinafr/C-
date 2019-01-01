#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Animal
{
    public:
        Animal(string, string);
        virtual void setNombre(string);
        virtual string getNombre();
        virtual string getId();
        virtual string toString();
        virtual void haceRuido();
        virtual ~Animal();

    protected:
        string Nombre;
        string Id;
};

#endif // ANIMAL_H
