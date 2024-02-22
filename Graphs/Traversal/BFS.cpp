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

