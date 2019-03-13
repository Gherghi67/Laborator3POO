#include "Queue.h"
#include "Container.h"
#include <iostream>
using namespace std;
void Queue::push(int x) {
	if (isFull()) {
		if (min_resize > 1) {
			cout << "Nu se poate face redimensionarea!";
			return;
		}
		resize(size + 1);
		store[size++] = x;
	}
	store[size++] = x;
}
void Queue::pop() {
	if (isEmpty()) {
		cout << "Stiva este goala!";
		return;
	}
	int i;
	for (i = 1; i < size; i++)
		store[i - 1] = store[i];
	size--;
}
int Queue::peek() {
	if (isEmpty()) {
		cout << "Stiva este goala!";
		return 0;
	}
	return store[0];
}
Queue::Queue() {

}
Queue::Queue(int capacity) : Container(capacity) {

}
Queue::Queue(int capacity, int min_resize) : Container(capacity, min_resize) {

}
Queue::Queue(Queue &queue) : Container(queue) {

}