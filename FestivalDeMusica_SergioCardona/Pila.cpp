#include "Pila.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

List::~List() {}

// CONSTRUCTOR VACIO

List::List()
{
    index = 0;
    first = nullptr;
}

bool List::empty()
{
    return (this->first == nullptr);
}
// INSERTA NODO
string List::add(string element_)
{
    Nodo* new_node = new Nodo(element_);

    new_node->after = first;
    first = new_node;

    return element_;
    index++;
}

//IMPRIME LA INFORMACION
string List::print()
{
    string dato = "";
    Nodo* temp = first;
    while (temp != nullptr) {
        dato += temp->element + " \n";
        temp = temp->after;
    }
    return dato;
}

// ELIMINA NODO POR ELEMENTO
//No se utiliza en este caso
void List::delete_node(string element_)
{
    Nodo* temp = first;
    Nodo* temp1 = first->after;

    int cont = 0;

    if (first->element == element_) {
        first = temp->after;
    }
    else {
        while (temp1) {
            if (temp1->element == element_) {
                Nodo* aux_node = temp1;
                temp->after = temp1->after;
                delete aux_node;
                cont++;
                index--;
                MessageBox::Show("Se eliminó la canción");
            }
            temp = temp->after;
            temp1 = temp1->after;
        }
    }

    if (cont == 0) {
        MessageBox::Show("La canción no se encuentra en los elementos de la cola, ingresa un elemento válido");
        cout << "NO EXISTE EL ELEMENTO " << endl;
    }
}

// ELIMINAR POR INDICE
//No se utiliza en este caso
void List::delete_id(int id)
{
    Nodo* temp = first;
    Nodo* temp1 = temp->after;

    if (id < 1 || id > index) {
        cout << "Fuera de rango " << endl;
    }
    else if (id == 1) {
        first = temp->after;
    }
    else {
        for (int i = 2; i <= id; i++) {
            if (i == id) {
                Nodo* aux_node = temp1;
                temp->after = temp1->after;
                delete aux_node;
                index--;
            }
            temp = temp->after;
            temp1 = temp1->after;
        }
    }
}

string List::pop()
{
    string elemento;
    if (!this->empty())
    {
        Nodo* tope = this->first;
        this->first = tope->obtener_siguiente();

        elemento = tope->obtener_dato();
        delete tope;
    }
    return elemento;
}

string List::top()
{
    string elemento;
    if (!this->empty())
    {
        elemento = this->first->obtener_dato();
    }
    return elemento;
}
