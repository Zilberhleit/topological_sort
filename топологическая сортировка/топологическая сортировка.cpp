#include "Graph.h"

int main() {
	Graph graph;
	graph.addNode(1, {4});
	graph.addNode(4, { 2, 3 });
	graph.addNode(3, { 2});
	graph.addNode(2);

	cout << graph.hasCycle() << endl;

	graph.print();
}