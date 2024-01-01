#include "Graph.h"

int main() {
	Graph graph;
	graph.addNode(142, {2, 3, 4});
	graph.addNode(1, { 2, 3, 4 });
	graph.addNode(2);
	graph.addNode(2, { 3, 4, 1 });

	graph.print();

}