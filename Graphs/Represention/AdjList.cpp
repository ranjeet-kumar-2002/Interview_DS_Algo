#include<iostream>
#include<vector>
using namespace std;

int main() {
    int vertex, edges;
    cin >> vertex >> edges;
    vector<int> adjList[vertex];
    int u, v;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    // printing
    for(int i = 0; i < vertex; i++) {
        cout << i << " ";
        for(int j = 0; j < adjList[i].size(); j++) {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int vertex, edges;
    cin >> vertex >> edges;
    vector<pair<int,int>> adjList[vertex];
    int u, v, w;
    for(int i = 0; i < edges; i++) {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w));
    }
    // printing
    for(int i = 0; i < vertex; i++) {
        cout << i << "->";
        for(int j = 0; j < adjList[i].size(); j++) {
            cout << "(" << adjList[i][j].first << "," << adjList[i][j].second << ") ";
        }
        cout << endl;
    }
    return 0;
}
