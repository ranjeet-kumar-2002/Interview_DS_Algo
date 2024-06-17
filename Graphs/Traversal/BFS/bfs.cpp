
#include<iostream>
#include<queue>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>visited(V,0);
        queue<int>q;
        q.push(0);
        visited[0] = 1;
        vector<int>ans;
        while(!q.empty()){
             int node = q.front();q.pop();
             ans.push_back(node);
             for(auto &nbr:adj[node]){
                  if(!visited[nbr]){
                      q.push(nbr);
                      visited[nbr]=1;
                  }
             }
        }
          return ans;
    }
};
int main(){
     int vertex,edges;
     cin>>vertex>>edges;
     vector<int>adjList[vertex];
     int u , v;
     for(int i = 0;i<edges;i++){
          cin>>u>>v;
          adjList[u].push_back(v);
          adjList[v].push_back(u);
     }
      Solution obj;
      vector<int>ans = obj.bfsOfGraph(vertex,adjList);
      for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
     
}
    
// V = 5, E = 4
// adj = {{1,2,3},{},{4},{},{}}

//***********************************************************************************//


BFS of graph

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
       vector<int>ans;
       vector<bool>visited(V,false);
       queue<int>q;
       q.push(0);
       visited[0] = true;
       while(!q.empty()){
           int node = q.front();q.pop();
           ans.push_back(node);
           for(auto&nbr:adj[node]){
               if(!visited[nbr]){
                   q.push(nbr);
                   visited[nbr] = true;
               }
           }
       }
       return ans;
    }
};

******************************************************************************************

class Solution {
  public:
    void bfs(vector<int>&ans,vector<bool>&visited,queue<int>q,vector<int>adj[]){
        while(!q.empty()){
            int node = q.front();q.pop();
            ans.push_back(node);
            for(auto &nbr:adj[node]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
      vector<int>ans;
      vector<bool>visited(V,false);
      queue<int>q;
      q.push(0);
      visited[0] =true;
      bfs(ans,visited,q,adj);
      return ans;
    }
};

//*****************************************************************************************//

//BFS of graph
class Solution {
  public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>visited(V,0);
        queue<int>q;
        q.push(0);
        visited[0] = 1;
        vector<int>ans;
        while(!q.empty()){
             int node = q.front();q.pop();
             ans.push_back(node);
             for(int j = 0;j<adj[node].size();j++){
                  if(!visited[adj[node][j]]){
                       q.push(adj[node][j]);
                       visited[adj[node][j]]=1;
                  }
             }
        }
          return ans;
    }
};

