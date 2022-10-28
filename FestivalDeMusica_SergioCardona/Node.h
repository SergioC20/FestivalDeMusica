#pragma once
#ifndef NODE_H
#define NODE_H

#include <iostream>

using namespace std;


class Node
{
public:
	Node();
	Node(string);
	~Node();

	Node* after;
	string element;

	void delete_all();
	void print();
};
#endif