// ProyectoC++.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
#include <string>﻿
#include "funciones.h"
using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
	Persona p1 =Persona(28,"Javier");
	p1.leer();
	system("pause");
	return 0;
}

