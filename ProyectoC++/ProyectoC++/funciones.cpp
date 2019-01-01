#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include <string>﻿
#include "funciones.h"
using namespace std;


Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;

}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}