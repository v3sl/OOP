#ifndef OOP__STACK_ON_ARRAY_H_
#define OOP__STACK_ON_ARRAY_H_

class Stack{
private:
	enum {MAX = 10};
	int Top;
public:
	int* st = new int[MAX];
	Stack () {Top = 0;}
	int top(){
		if(IsEmpty())
			throw std::runtime_error("Stack is empty");
		return st[1];
	}
	void push (int var) {st [++Top] = var;}
	int pop () {
		if(IsEmpty())
			throw std::runtime_error("Stack is empty");
		int answer = st [Top--];
		for(int i = 1 ; i <= Top; i++) {
			st[i-1] = st[i];
			st[0] = NULL;
		}
		return answer;
	}
	bool IsEmpty(){return !Top;}
	void print(){
		for(int i = Top; i >=1; i--)
			std::cout << st[i] << '\n';
	}
};

#endif //OOP__STACK_ON_ARRAY_H_
