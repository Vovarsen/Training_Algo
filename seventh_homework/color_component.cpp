#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void dfs(unordered_map<int, vector<int>>& graph, int v, unordered_map<int, int>& visited, int color) {
	visited[v] = color;
	vector<int>& neighbours = graph[v];
	for (int j = 0; j <= neighbours.size(); j++) {
		int i = neighbours[j];

		if (visited[i] == 0) {
			dfs(graph, i, visited, color);
		}
	}
}
unordered_map<int, int> find_components(unordered_map<int, vector<int>>& graph) {
	unordered_map<int, int> visited;

	int color = 0;
	for (int i = 1; i <= graph.size(); i++) {
		int currentNode = i;
		
		if (visited[currentNode] == 0) {
			color++;
			dfs(graph, currentNode, visited, color);
		}
	}
	return visited;
}