#pragma once
class Container {
protected:
	int* store;
	int size = 0;
	int capacity;
	int min_resize = 5;
	void resize(int size);
public:
	Container();
	Container(int capacity);
	Container(int capacity, int min_resize);
	Container(Container &container);
	~Container();
	int getSize();
	int getCapacity();
	bool isEmpty();
	bool isFull();
};