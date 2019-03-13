#include "Container.h"
#include <iostream>
using namespace std;
Container::Container() {
	capacity = 0;
}
Container::Container(int capacity) {
	this->capacity = capacity;
	store = new int[capacity];
}
Container::Container(int capacity, int min_resize) {
	this->capacity = capacity;
	store = new int[capacity];
	this->min_resize = min_resize;
}
Container::Container(Container &container) {
	int i;
	store = new int[container.capacity];
	for (i = 0; i < container.size; i++) {
		store[i] = container.store[i];
	}
	capacity = container.capacity;
	size = container.size;
}
Container::~Container() {
	delete[] store;
	size = 0;
	capacity = 0;
}
int Container::getSize() {
	return size;
}
int Container::getCapacity() {
	return capacity;
}
bool Container::isEmpty() {
	if (size == 0)
		return 1;
	return 0;
}
bool Container::isFull() {
	if (size == capacity)
		return 1;
	return 0;
}
void Container::resize(int size) {
	int* p = store;
	int i;
	store = new int[size];
	for (i = 0; i < capacity; i++) {
		store[i] = p[i];
	}
	capacity = size;
	delete[] p;
}