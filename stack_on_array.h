#ifndef OOP__STACK_ON_ARRAY_H_
#define OOP__STACK_ON_ARRAY_H_

template <typename T>
class Stack{
private:
	enum {MAX = INT_MAX};
	int Top;
public:
	int size;
	T* st = new T[MAX];
	Stack () {
		Top = 0;
		size = 0;
	}
	T top(){
		if(IsEmpty())
			throw std::runtime_error("Stack is empty");
		return st[1];
	}
	void push (T var) {
		st [++Top] = var;
		size++;
	}
	T pop () {
		if(IsEmpty())
			throw std::runtime_error("Stack is empty");
		T answer = st [Top--];
		for(size_t i = 1 ; i <= Top; i++) {
			st[i-1] = st[i];
			st[0] = NULL;
		}
		size--;
		return answer;
	}
	bool IsEmpty(){return !size;}
	void print(){
		for(size_t i = Top; i >=1; i--)
			std::cout << st[i] << '\n';
	}
	~Stack(){
		delete[] st;
	}
	friend void operator<< (Stack<T> &stack, T var){stack.push(var);}
	friend void operator>> (Stack<T> &stack, T var){stack.pop();}
	Stack& operator= (const Stack &stack){
		this->st = stack.st;
		this->Top = stack.Top;
		this->size = stack.size;
	}
	friend bool operator== (const Stack &stack1, const Stack &stack2){
		return (stack1.size == stack2.size);
	}
	friend bool operator!= (const Stack &stack1, const Stack &stack2){
		return !(stack1 == stack2);
	}
	friend bool operator< (const Stack &stack1, const Stack &stack2){
		return (stack1.size < stack2.size);
	}
	friend bool operator<= (const Stack &stack1, const Stack &stack2){
		return (stack1.size < stack2.size || stack1 == stack2);
	}
	friend bool operator> (const Stack &stack1, const Stack &stack2){
		return (stack1.size > stack2.size);
	}
	friend bool operator>= (const Stack &stack1, const Stack &stack2){
		return (stack1.size > stack2.size || stack1 == stack2);
	}
	T& operator[] (const int index) {return st[size-index+1];};
};



#endif //OOP__STACK_ON_ARRAY_H_
