#ifndef OOP__NODE_H_
#define OOP__NODE_H_

class Node {
public:
	int value;
	Node* next;
	Node(int _v, Node* _n = nullptr): value(_v), next(_n){}
};

#endif //OOP__NODE_H_
