#include "Graph.h"

Graph::Graph(){}

Graph::Graph(int size) {
	this->size = size;
	vertices.resize(size);
}

void Graph::addNode(int mainNode, vector<int> neighborNodes){
	
}

void Graph::print(){}

bool Graph::hasCycle(){}

void Graph::topological_sort(){}