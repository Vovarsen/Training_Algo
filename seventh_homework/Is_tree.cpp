#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool IsTree(vector<vector<int>>& graph, int n) {
	if (n == 0) return true;

	vector<bool>visited;
	for (int i = 0; i < n; i++) {
		visited[i] = false;
	}
	vector<int> parent;
	for (int i = 0; i < n; i++) {
		visited[i] = -1;
	}
	queue<int> q;

	int start = 0;
	q.push(start);
	visited[start] = true;

	int visit = 0;

	while (!q.empty()) {
		int u = q.front();
		q.pop();

		visit++;
		for (int i = 0; i < graph[u].size(); i++) {
			int v = graph[u][i];

			if (v == parent[u]) {
				continue;
			}
			if (visited[v]) {
				return false;
			}
			else {
				visited[v] = true;
				parent[v] = u;
				q.push(v);
			}
		}
	}
	return visit == n;
}