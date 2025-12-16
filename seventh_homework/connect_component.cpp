#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

void dfs(unordered_map<int, vector<int>>& graph, int v, unordered_map<int, bool>& visited, vector<int>& component) {
	visited[v] = true;
	component.push_back(v);
	for (int neighbor : graph[v]) {
		if (!visited[neighbor]) {
			dfs(graph, neighbor, visited, component);
		}
	}
}
vector<vector<int>> find_components(unordered_map<int, vector<int>>& graph) {
	unordered_map<int, bool> visited;

	vector<vector<int>> components;
	int n = graph.size();
	for (int i = 1; i <= n; i++) {
		int currentNode = i;
		if (visited[currentNode] == false) {
			vector<int> component;
			dfs(graph, currentNode, visited, component);
			components.push_back(component);
		}
	}
	return components;
}
