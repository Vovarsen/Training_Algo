#include<iostream>
#include<vector>
#include<queue>
#include<utility>

using namespace std;

const int INF = INT_MAX;

vector<int> dijkstra(int n, int start, vector<vector<pair<int, int>>>& adj) {
	vector<int>distances;
	for (int i = 0; i < n; i++) {
		distances[i] = INF;
	}
	distances[start] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

	pq.push(make_pair(0, start));

	while (!pq.empty()) {
		int cur_dist = pq.top().first;
		int u = pq.top().second;
		pq.pop();

		for (int i = 0; i < adj[u].size(); i++) {
			int v = adj[u][i].first;
			int weight = adj[u][i].second;

			if (distances[u] + weight < distances[v]) {
				distances[v] = distances[u] + weight;
				pq.push(make_pair(distances[v], v));
			}
		}
	}
	return distances;
}