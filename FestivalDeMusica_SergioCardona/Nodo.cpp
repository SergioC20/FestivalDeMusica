#include "Nodo.h"

Nodo::Nodo() {
	this->element = element;
	this->after = nullptr;
}

Nodo::Nodo(string element_) {
	element = element_;
	after = nullptr;
}

string Nodo::obtener_dato() {
	return this->element;
}

Nodo* Nodo::obtener_siguiente() {
	return this->after;
}



Nodo::~Nodo() {

}

