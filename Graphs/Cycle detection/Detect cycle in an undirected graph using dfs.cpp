

// class Solution {
//   public:
//     bool cycle(vector<int> adj[],vector<int> &visited,int src,int parent){
//         visited[src]=true;
//         for(auto nbr : adj[src]){
//             if(!visited[nbr]){
//                 if(cycle(adj,visited,nbr,src)) return true;
//             } else { // visited
//                   if(nbr!=parent) return true; 
//             }
//         }
//         return false;
//     }
//     bool isCycle(int V, vector<int> adj[]) {
//         vector<int> visited(V,false);
//         for(int u =0;u<V;u++){
//             if(!visited[u]){
//                 if(cycle(adj,visited,u,-1)) return true; // adj,visited,src,parent
//             }
//         }
//         return false;
//     }
// };



class Solution {
  public:
    bool cycle(vector<int> adj[],vector<int> &visited,int src,int parent){
        visited[src]=true;
        for(int j = 0;j<adj[src].size();j++){
             if(adj[src][j]==parent ) continue;
             if(visited[adj[src][j]]) return true;
             if(cycle(adj,visited,adj[src][j],src)) return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        vector<int> visited(V,false);
        
        for(int u =0;u<V;u++){
            if(!visited[u]){
                if(cycle(adj,visited,u,-1)) return true; // adj,visited,src,parent
            }
        }
        return false;
    }
};
