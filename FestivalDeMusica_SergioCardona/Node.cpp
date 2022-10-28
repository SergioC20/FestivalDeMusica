#include "Node.h"


Node::Node() {
	this->element = element;
	this->after = nullptr;
}

Node::Node(string element_) {
	element = element_;
	after = nullptr;
}

void Node::delete_all() {
	if (after) {
		after->delete_all();
	}
	delete this;
}

void Node::print() {
	cout << element << " ->";
}

Node::~Node() {

}

