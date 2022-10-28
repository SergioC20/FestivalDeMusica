#pragma once
#ifndef LIST_H
#define LIST_H

#include <string>
#include <stdlib.h>
#include "Nodo.h"

using namespace std;


class List
{
public:
    List();
    ~List();

    bool empty();
    string add(string);
    string print();
    void delete_node(string);
    void delete_id(int);
    string pop();
    string top();


private:
    Nodo* first;
    int index;
};

#endif
