#ifndef OOP__STACK_ON_ARRAY_H_
#define OOP__STACK_ON_ARRAY_H_

class Stack{
private:
	enum {MAX = 10};
	int st[MAX];

public:
	int top;
	Stack () {top = 0;}
	void push (int var) {st [++top] = var;}
	int pop () {return st [top--];}
	bool IsEmpty(){return !top;}
	void print(){
		for(int i = 1; i <= top; i++)
			std::cout << st[i] << '\n';
	}
};

#endif //OOP__STACK_ON_ARRAY_H_
