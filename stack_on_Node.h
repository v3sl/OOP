#ifndef OOP__STACK_ON_NODE_H_
#define OOP__STACK_ON_NODE_H_

#include "Node.h"

class Stack {
public:
	int size;
	Node* first;
	Stack(): size(0), first(nullptr) {}
	int top() {
		if (!isEmpty()) {
			throw std::runtime_error("Stack is empty");
		}
		return first->value;
	}
	int pop() {
		if (!isEmpty()) {
			throw std::runtime_error("Stack is empty");
		}
		int v = first->value;
		Node* old = first;
		first = first->next;
		size--;
		delete old;
		return v;
	}
	void push(int value) {
		Node* newNode = new Node(value, first);
		first = newNode;
		size++;
	}
	bool isEmpty() {
		 return size;
	}
	void print(std::ostream& out) {
		Node* cur = first;
		while (cur!= nullptr) {
			out << cur->value << "  ";
			cur = cur->next;
		}
	}
};

#endif //OOP__STACK_ON_NODE_H_
