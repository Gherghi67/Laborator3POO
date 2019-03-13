#include "Container.h"
#include "Stack.h"
#include <iostream>
using namespace std;
void Stack::push(int x) {
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
void Stack::pop() {
	if (isEmpty()) {
		cout << "Stiva este goala!";
		return;
	}
	size--;
}
int Stack::peek() {
	if (isEmpty()) {
		cout << "Stiva este goala!";
		return 0;
	}
	return store[size - 1];
}
Stack::Stack() {

}
Stack::Stack(int capacity) : Container(capacity) {
}
Stack::Stack(int capacity, int min_resize) : Container(capacity, min_resize) {

}
Stack::Stack(Stack &stack) : Container(stack) {
	
}