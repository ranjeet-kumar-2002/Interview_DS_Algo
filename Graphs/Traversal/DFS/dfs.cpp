#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
  public:
    void dfs(int node,vector<int> adj[],vector<int>&ans,vector<int>&visited){
         visited[node] = 1;
         ans.push_back(node);
         for(auto &nbr:adj[node]){
              if(!visited[nbr]){
                   dfs(nbr,adj,ans,visited);
              }
         }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>visited(V,0);
        vector<int>ans;
        dfs(0,adj,ans,visited);
        return ans;
    }
};

int main(){
     int vertex,edges;
     cin>>vertex>>edges;
     vector<int>adjlist[vertex];
     int u ,v;
     for(int i = 0;i<edges;i++){
          cin>>u>>v;
          adjlist[u].push_back(v);
          adjlist[v].push_back(u);
     }
     Solution obj;
     vector<int>ans = obj.dfsOfGraph(vertex,adjlist);
     for(int i = 0;i<ans.size();i++){
          cout<<ans[i]<<" ";
     }
     return 0;
}

**************************************************************************************

class Solution {
  public:
    void dfs(int src,vector<bool>&visited,vector<int>adj[],vector<int>&ans){
        ans.push_back(src);
        visited[src] = true;
        for(auto &nbr:adj[src]){
            if(!visited[nbr]){
                dfs(nbr,visited,adj,ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>ans;
        vector<bool>visited(V,false);
            dfs(0,visited,adj,ans);
        return ans;
    }
};
//****************************************************************************//
class Solution {
  public:
    void dfs(int node,vector<int> adj[],vector<int>&ans,vector<int>&visited){
         visited[node] = 1;
         ans.push_back(node);
         for(int j = 0;j<adj[node].size();j++){
              if(!visited[adj[node][j]]){
                  dfs(adj[node][j],adj,ans,visited);
              }
         }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>visited(V,0);
        vector<int>ans;
        dfs(0,adj,ans,visited);
        return ans;
    }
};
