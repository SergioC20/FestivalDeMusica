#pragma once
#include <iostream>
#include <string.h>
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class OrdenarPlayList
{
public:
	void start(string nombres[], string artistas[], int cantidad);
	string InicializarN(int n);
	string InicializarA(int n);
	int InicializarC();
	void OrdenPorNombre();
	void OrdenPorArtista();
};

