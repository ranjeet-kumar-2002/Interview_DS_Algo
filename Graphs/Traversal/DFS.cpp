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
