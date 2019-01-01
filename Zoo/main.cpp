#include <iostream>
#include "Animal.h"
#include "Perro.h"
#include "Gato.h"
#include "Lista.h"

using namespace std;

int main()
{
    Animal *p = new Perro("Tomy","111",5);
    Animal *p1 = new Perro("Lucy","222",4);
    Animal *g = new Gato("Michi","333",2);
    Lista *lis = new Lista();
    lis->add(p);
    lis->add(p1);
    lis->add(g);
    cout<<lis->toString()<<endl;
    return 0;
}
