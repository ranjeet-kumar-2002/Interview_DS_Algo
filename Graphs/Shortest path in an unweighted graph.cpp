#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> shortestPath(vector<pair<int, int>> edges, int n, int m, int s, int t) {
    vector<int> adj[n];
    s--;  // converting to zero-indexed
    t--;  // converting to zero-indexed

    for (auto &x : edges) {
        int u = x.first - 1;  // converting to zero-indexed
        int v = x.second - 1; // converting to zero-indexed
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(n, 0);
    vector<int> parent(n, -1);
    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (auto &nbr : adj[node]) {
            if (!visited[nbr]) {
                q.push(nbr);
                visited[nbr] = true;
                parent[nbr] = node;
            }
        }
    }

    vector<int> ans;
    int current = t;
    while (current != -1) {
        ans.push_back(current + 1);  // converting back to one-indexed
        current = parent[current];
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
