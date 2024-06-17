#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> topoSort(int V, vector<int> adj[]) {
    vector<int> indegree(V, 0);

    // Calculate indegree of each vertex
    for (int u = 0; u < V; u++) {
        for (auto nbr : adj[u]) {
            indegree[nbr]++;
        }
    }

    queue<int> q;

    // Push all vertices with indegree 0 into the queue
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0) q.push(i);
    }

    vector<int> ans;

    // Perform BFS
    while (!q.empty()) {
        int src = q.front();
        q.pop();
        ans.push_back(src);

        for (auto nbr : adj[src]) {
            indegree[nbr]--;
            if (indegree[nbr] == 0) q.push(nbr);
        }
    }

    return ans;
}

int main() {
    int vertex, edges;
    cin >> vertex >> edges;

    vector<int> adj[vertex];

    for (int i = 0; i < edges; i++) {
        int src, dest;
        cin >> src >> dest;
        adj[src].push_back(dest);
    }

    vector<int> ans = topoSort(vertex, adj);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
