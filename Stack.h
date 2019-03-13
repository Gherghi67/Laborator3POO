#pragma once
#include "Container.h"
class Stack : public Container {
public:
	void push(int x);
	void pop();
	int peek();
	Stack();
	Stack(int capacity);
	Stack(int capacity, int min_resize);
	Stack(Stack &stack);
};