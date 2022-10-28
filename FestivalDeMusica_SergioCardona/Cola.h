#pragma once
#ifndef COLA_H
#define COLA_H

#include <string>
#include <stdlib.h>

#include "Node.h"

using namespace std;


class Cola
{
public:
    Cola();
    ~Cola();

    void add(string);
    string print();
    string desapilar();
    void delete_node(string);
    bool empty();

private:
    Node* first;
    int index;
};
#endif
