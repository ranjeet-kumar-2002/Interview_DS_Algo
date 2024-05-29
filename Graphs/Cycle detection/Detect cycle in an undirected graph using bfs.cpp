#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
#include<stack>
using namespace std;

bool bfs(int src,vector<int>&visited,vector<int> adj[]){
      queue<pair<int,int>>q; // src,parent
      q.push({src,-1});
      visited[src]=1;
         while(!q.empty()){
              int node = q.front().first;
              int parent = q.front().second;
              q.pop();
              for(auto &nbr:adj[node]){
                   if(parent==nbr) continue;
                   if(visited[nbr]) return 1;
                   visited[nbr]=1;
                   q.push({nbr,node});
              }
              
         }
         return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
      vector<int>visited(V,0);
      for(int i = 0;i<V;i++){
           if(!visited[i]){
               if(bfs(i,visited,adj)) return true;
           }
      }
      return false;
    }
    
int main(){
     int vertex,edges;
     cin>>vertex>>edges;
     vector<int>adj[vertex];
     for(int i = 0;i<edges;i++){
          int src,dest;
          cin>>src>>dest;
          adj[src].push_back(dest);
          adj[dest].push_back(src);
     }
     cout<<isCycle(vertex,adj);
}
