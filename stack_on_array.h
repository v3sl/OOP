#ifndef OOP__STACK_ON_ARRAY_H_
#define OOP__STACK_ON_ARRAY_H_

class Stack{
private:
	enum {MAX = 10};
	int st[MAX];
	int top;
public:
	Stack () {top = 0;}
	void push (int var) {st [++top] = var;}
	int pop () {return st [top--];}
};

#endif //OOP__STACK_ON_ARRAY_H_
