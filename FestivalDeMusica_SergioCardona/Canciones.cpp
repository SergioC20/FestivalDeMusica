#include "Canciones.h"
#include "Pila.h"
#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string linea[500];

string* Canciones::cargar_archivo(string ruta) {
	ifstream cadena(ruta);
	int posicion = 0;

	if (!cadena.fail())
	{
		while (!cadena.eof()) {

			getline(cadena, linea[posicion], '\n');
			posicion = posicion + 1;

		}

		cadena.close();
		return linea;
	}
	
}
