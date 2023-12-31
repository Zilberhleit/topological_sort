#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Graph {
public:
	Graph();
	Graph(int size);
	void addNode(int mainNode, vector<int> neighborNode);
	bool hasCycle();
	void topological_sort();
	void print();

	vector<pair<int, vector<int>>> vertices;
	int size;
};