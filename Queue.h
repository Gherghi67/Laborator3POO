#pragma once
#include "Container.h"
class Queue : public Container {
public:
	void push(int x);
	void pop();
	int peek();
	Queue();
	Queue(int capacity);
	Queue(int capacity, int min_resize);
	Queue(Queue &queue);
};