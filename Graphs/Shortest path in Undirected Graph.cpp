//O(V+E) tc
//O(V+E) sc
class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
      vector<int>adj[N];
      
    //   for(int i =0;i<M;i++){
    //       adj[edges[i][0]].push_back(edges[i][1]);
    //       adj[edges[i][1]].push_back(edges[i][0]);
    //   }
    
     for(auto &x:edges){
          int u = x[0];
          int v = x[1];
          adj[u].push_back(v);
          adj[v].push_back(u);
      }
      vector<int>visited(N,0);
      vector<int>dist(N,-1);
      queue<int>q;
      q.push(src);
      visited[src]=true;
      dist[src]=0;
      while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto &nbr:adj[node]){
            if(!visited[nbr]){
                 dist[nbr] = dist[node]+1;
                 q.push(nbr);
                 visited[nbr]=true;
            }
        }
        
      }
      return dist;
    }
};
