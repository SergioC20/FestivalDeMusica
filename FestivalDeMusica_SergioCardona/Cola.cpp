#include "Cola.h"


using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

Cola::~Cola() {}

// Constructor por defecto

Cola::Cola()
{
    index = 0;
    first = nullptr;
}

bool Cola::empty()
{
    return (this->first == nullptr);
}

// Insertar al final
void Cola::add(string element_)
{
    Node* new_Nodo = new Node(element_);
    Node* temp = first;

    if (!first) {
        first = new_Nodo;
    }
    else {
        while (temp->after != NULL) {
            temp = temp->after;
        }
        temp->after = new_Nodo;
    }
    index++;
}

string Cola::print()
{
    string dato = "";
    Node* temp = first;
    while (temp != nullptr) {
        dato += temp->element + " \n";
        temp = temp->after;
    }
    return dato;
}

string Cola::desapilar()
{
    string elemento = first->element;
    Node* aux = first;
    first = first->after;
    delete aux;

    return elemento;
}

//No se usa en el comportamiento de colas.
void Cola::delete_node(string element_)
{
    Node* temp = first;
    Node* temp1 = first->after;

    int cont = 0;

    if (first->element == element_) {
        first = temp->after;
    }
    else {
        while (temp1) {
            if (temp1->element == element_) {
                Node* aux_node = temp1;
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
        MessageBox::Show("No existe el elemento en la cola, ingresa uno válido");
        cout << "NO EXISTE EL ELEMENTO " << endl;
    }
}
