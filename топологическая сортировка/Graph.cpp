#include "Graph.h"

Graph::Graph(){}

void Graph::addNode(int mainNode, vector<int> neighborNodes){
	sort(neighborNodes.begin(), neighborNodes.end());

	pair<int, vector<int>> elem = make_pair(mainNode, neighborNodes);

	for  (auto& search : vertices)
		if (search.first == elem.first)
			return;

	vertices.push_back(elem);
	size++;
	sort(vertices.begin(), vertices.end());
}

void Graph::addNode(int mainNode){
	addNode(mainNode, {});
}

void Graph::print(){
	for (int i = 0; i < size; i++)
	{
		cout << vertices[i].first << " -> ";
		if (!vertices[i].second.empty()) {
			for (int neighbor : vertices[i].second)
				cout << neighbor << " ";
		}
		cout << endl;
	}
}

bool Graph::hasCycle(){


	return false;
}

void Graph::topological_sort(){}