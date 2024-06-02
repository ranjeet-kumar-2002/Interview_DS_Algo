class Solution {
  public:
     void dfs(int src,stack<int>&st,vector<int>&visited, vector<pair<int,int>>adj[]){
          visited[src] = true;
          for(auto &nbr:adj[src]){
               if(!visited[nbr.first]){
                    dfs(nbr.first,st,visited,adj);
               }
          }
          st.push(src);
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
       vector<pair<int,int>>adj[N];
       for(int i= 0;i<M;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        adj[u].push_back({v,w});
       }       
       stack<int>st;
       vector<int>visited(N,0);
       vector<int>dist(N,INT_MAX);
       dist[0]= 0;
       dfs(0,st,visited,adj);
       while(!st.empty()){
            int node = st.top();
            st.pop();
            for(auto &nbr:adj[node]){
                 int nbrr = nbr.first;
                 int w = nbr.second;
                 dist[nbrr] = min(dist[nbrr],dist[node]+w); 
            }
       }
       for(int i = 0;i<dist.size();i++){
            if(dist[i]==INT_MAX) dist[i]=-1;    
       }
       return dist;
    }
};

***************************************************************************************************
#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<cmath>
#include<algorithm>
#include<stack>
using namespace std;
void dfs(int src,stack<int>&st,vector<int>&visited, vector<pair<int,int>>adj[]){
          visited[src] = true;
          for(auto &nbr:adj[src]){
               if(!visited[nbr.first]){
                    dfs(nbr.first,st,visited,adj);
               }
          }
          st.push(src);
     }
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
       vector<pair<int,int>>adj[N];
       for(int i= 0;i<M;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        adj[u].push_back({v,w});
       }       
       stack<int>st;
       vector<int>visited(N,0);
       vector<int>dist(N,INT_MAX);
       dist[0]= 0;
       dfs(0,st,visited,adj);
       while(!st.empty()){
            int node = st.top();
            st.pop();
            for(auto &nbr:adj[node]){
                 int nbrr = nbr.first;
                 int w = nbr.second;
                 dist[nbrr] = min(dist[nbrr],dist[node]+w); 
            }
       }
       for(int i = 0;i<dist.size();i++){
            if(dist[i]==INT_MAX) dist[i]=-1;    
       }
       return dist;
    }
int main(){
    int N,M;cin>>N>>M;
    vector<vector<int>>edges(M,vector<int>(3));
    for(int i =0;i<M;i++){
        for(int j =0;j<3;j++){
            cin>>edges[i][j];
        }
    }
    vector<int> ans = shortestPath(N,M,edges);
    for(auto &x:ans) cout<<x<<endl;
    return 0;
}
// Input:
// N = 4, M = 2
// edge = [[0,1,2],[0,2,1]]
// Output:
// 0 2 1 -1


