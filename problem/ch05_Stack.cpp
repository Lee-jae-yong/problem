#include <iostream>
using namespace std;
class stack {
	int *p;
	int size;
	int top;
	
public:
	stack();
	stack(int size);
	stack(const stack& s);
	~stack();
	bool push(int n);
	bool pop(int &n);
};
stack::stack() : top(-1) {}
stack::stack(int size) {
	this->size = size;
	p = new int[size];
}
stack::~stack() { delete[] p; }
stack::stack(const stack& s) { 
	this->size = s.size;
	this->p = s.p;
	this->top = s.top;
}
bool stack::push(int n) {
	if (top >= 9) {
		return false;
	}
	else {
		p[++top] = n;
		return true;	
	}
	
}
bool stack::pop(int& n) {
	if (top < 0)
		return false;
	else {
		n = p[top--];
		return true;
	}
}


int main() {
	stack a(10);
	a.push(10);
	a.push(20);
	stack b = a;
	b.push(30);
	
	
	int n;
	
	a.pop(n);
	cout << n << endl;
	b.pop(n);
	cout << n << endl;
	
}