#include<iostream>
#include<queue>
#include<vector>
using namespace std;
    void dfs(int src,vector<int>&visited, vector<int>adjlist[]){
         visited[src]= 1;
         for(auto &nbr:adjlist[src]){
              if(!visited[nbr]){
                  dfs(nbr,visited,adjlist);
              }
         }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
      vector<int>adjlist[V];
      for(int i = 0;i<adj.size();i++){
          for(int j = 0;j<adj[0].size();j++){
              if(adj[i][j]==1){
                  adjlist[i].push_back(j);
                  adjlist[j].push_back(i);
              }
          }
      }
      int cc = 0;
      vector<int>visited(V,0);
      for(int i =0;i<V;i++){
          if(!visited[i]) {
              dfs(i,visited,adjlist);
              cc++;
          }
      }
      return cc;
    }

int main(){
    int m,n;cin>>m>>n;
    vector<vector<int>>adj(m,vector<int>(n));
    for(int i =0;i<m;i++){
        for(int j =0;j<n;j++){
            cin>>adj[i][j];
        }
    }
    cout<<"enter no of vertex"<<endl;
    int vertex;cin>>vertex;
    cout<<numProvinces(adj,vertex);
    return 0;
}

****************************************************************************************



class Solution {
  public:
    void dfs(int src,vector<int>&visited, vector<int>adjlist[]){
         visited[src]= 1;
         for(auto &nbr:adjlist[src]){
              if(!visited[nbr]){
                  dfs(nbr,visited,adjlist);
              }
         }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
      vector<int>adjlist[V];
      for(int i = 0;i<adj.size();i++){
          for(int j = 0;j<adj[0].size();j++){
              if(adj[i][j]==1){
                  adjlist[i].push_back(j);
                  adjlist[j].push_back(i);
              }
          }
      }
      int cc = 0;
      vector<int>visited(V,0);
      for(int i =0;i<V;i++){
          if(!visited[i]) {
              dfs(i,visited,adjlist);
              cc++;
          }
      }
      return cc;
    }
};

*******************************************************************************************************
class Solution {
  public:
    void bfs(int src,vector<int>&visited,  vector<int>adjlist[]){
         queue<int>q;
         q.push(src);
         visited[src]= true;
         while(!q.empty()){
              int node = q.front();q.pop();
              for(auto &nbr:adjlist[node]){
                  if(!visited[nbr]){
                      visited[nbr]= true;
                      q.push(nbr);
                  }
              }
         }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
      vector<int>adjlist[V];
      for(int i = 0;i<adj.size();i++){
          for(int j = 0;j<adj[0].size();j++){
              if(adj[i][j]==1){
                   adjlist[i].push_back(j);
                   adjlist[j].push_back(i);
              }
          }
      }
      int cc = 0;
      vector<int>visited(V,0);
      for(int i =0;i<V;i++){
          if(!visited[i]) {
              bfs(i,visited,adjlist);
              cc++;
          }
      }
      return cc;
    }
};
