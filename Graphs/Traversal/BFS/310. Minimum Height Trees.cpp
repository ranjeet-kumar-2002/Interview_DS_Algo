#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges){
        unordered_map<int,vector<int>> adj;
        vector<int> degree(n,0);
        for(auto &x: edges){
            int src = x[0];
            int dest = x[1];
            adj[src].push_back(dest);
            adj[dest].push_back(src);
            degree[src]++;
            degree[dest]++;
        }
        queue<int> q;
        for(int i =0;i<n;i++){
            if(degree[i]==1){
                q.push(i);
            }
        }

        while(n>2){
            int size = q.size();
            n  = n - size;
            for(int i =0;i<size;i++){
                int node = q.front();q.pop();
                degree[node]--;
                for(auto &nbr:adj[node]){
                    degree[nbr]--;
                    if(degree[nbr]==1) q.push(nbr);
                }
            }
        }
        vector<int> ans;
        while(!q.empty()){
            int front = q.front();q.pop();
            ans.push_back(front);
        }
        return ans;
    }
};

int main(){ 
    int n,m; // n==nodes and m==edges
    cout << "Enter the number of nodes and edges: ";
    cin >> n >> m;
    vector<vector<int>> edges(m, vector<int>(2));
    for(int i = 0; i < m; i++){
        cin >> edges[i][0] >> edges[i][1];
    }
    Solution obj;
    vector<int> temp = obj.findMinHeightTrees(n, edges);
    for(auto x: temp) cout << x << " ";
    return 0;
}

********************************************************************************
// for dfs or bfs O(v+e)
// here we can start cetre of the graph
// we don't need to check the leaf
// topological sort;

class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>adj;
        if(n==1) return {0};
         vector<int>degree(n,0);
        for(auto &x:edges){
             int src = x[0];
             int dest = x[1];
             adj[src].push_back(dest);
             adj[dest].push_back(src);
             degree[src]++;
             degree[dest]++;
        }
       
        // for(auto &x:adj){
        //      int node = x.first;
        //      vector<int>temp = x.second;
        //      degree[node] = temp.size();
        // }

        queue<int>q;
        for(int i =0;i<n;i++){
             if(degree[i]==1) q.push(i);
        }

        while(n>2){
             int size = q.size();
             n = n-size;
             for(int i =0;i<size;i++){
                 int node = q.front();q.pop();
                 degree[node]--; 
                 for(auto &nbr:adj[node]){
                     degree[nbr]--;
                     if(degree[nbr]==1) q.push(nbr);
                 }
             }
        }

        vector<int>ans;
        while(!q.empty()){
             int front = q.front();q.pop();
             ans.push_back(front);
        }
        return ans;

    }
};

//310. Minimum Height Trees
