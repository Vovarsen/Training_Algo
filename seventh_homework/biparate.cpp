#include <iostream>
#include <vector>

using namespace std;

bool dfs(int u, int c, vector<vector<int> >& adj, vector<int>& colors) {
    colors[u] = c; 

    for (int i = 0; i < adj[u].size(); ++i) {
        int v = adj[u][i];

        if (colors[v] == 0) {
            if (!dfs(v, 3 - c, adj, colors)) {
                return false; 
            }
        }
        
        else if (colors[v] == c) {
            return false;
        }
    }

    return true;
}

bool isBipartite(int n, vector<vector<int> >& adj) {
    vector<int> colors(n, 0); 

    for (int i = 0; i < n; ++i) {
        if (colors[i] == 0) {
            if (!dfs(i, 1, adj, colors)) {
                return false;
            }
        }
    }
    return true;
}