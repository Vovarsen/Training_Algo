#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool dfs(vector<vector<int>>& graph, int vertex, int parent, vector<bool>&visited) {
	visited[vertex] = true;

	for (int v : graph[vertex]) {
		if (v == parent) {
			continue;
		}

		if (visited[v]) {
			return true;
		}
		if (dfs(graph, v, vertex, visited)) {
			return true;
		}
	}
	return false;
}

bool has_cycle(vector<vector<int>>& graph) {
	vector<bool> visited;
	for (int i = 0; i <= graph.size(); i++) {
		visited[i] = false;
	}
	for (int i = 0; i < graph.size(); i++) {
		if (!visited[i]) {
			if (dfs(graph, i, -1, visited)) {
				return true;
			}
		}
	}
	return false;
}