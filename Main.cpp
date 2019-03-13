#include <fstream>
#include "Stack.h"
#include "Queue.h"
using namespace std;
ofstream g("out.txt");
int main() {
	Queue queue(100);
	queue.push(20);
	queue.push(50);
	queue.push(40);
	queue.pop();
	g << queue.peek();
	return 0;
}