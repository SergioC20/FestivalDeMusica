#pragma once
#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;


class Nodo
{
public:
	Nodo();
	Nodo(string);
	string obtener_dato();
	Nodo* obtener_siguiente();

	~Nodo();
	Nodo* after;
	string element;
};
#endif
