#include<iostream>
#include<queue>
#include<vector>
using namespace std;
    bool bipartite(int src,vector<int>&color,vector<int>adj[]){
         queue<int>q;
         q.push(src);
         color[src] = 0; // Blue color 
         while(!q.empty()){
              int node = q.front();q.pop();
              for(auto &nbr:adj[node]){
                   if(color[nbr]==-1){
                        color[nbr] = (color[node]+1)%2;
                        q.push(nbr);
                   }else {
                        
                        if(color[nbr] == color[node]) return 0;
                        
                   }
              }
         }
         return true;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V,-1);
	    for(int i = 0;i<V;i++){
	            if(color[i]==-1){
	                  if(!bipartite(i,color,adj)) return 0;
	            }
	    }
	    return true;
	}
int main(){
     int v,e;
     cin>>v>>e;
     vector<int>adj[v];
     for(int i =0;i<e;i++){
          int u,v;
          cin>>u>>v;
          adj[u].push_back(v);
          adj[v].push_back(u);
     }
     cout<<isBipartite(v,adj);
     return 0;
}

************************************************************************************************

class Solution {
public:
    bool bipartite(int src,vector<int>&color,vector<int>adj[]){
        for(auto &nbr:adj[src]){
            if(color[nbr]==-1){
                color[nbr] = (color[src]+1)%2;
                if(!bipartite(nbr,color,adj)) return 0;
            }else {
                 if(color[nbr]==color[src]) return 0;
            }
        }
        return 1;
    }
	bool isBipartite(int V, vector<int>adj[]){
	    vector<int>color(V,-1);
	    for(int i = 0;i<V;i++){
	            if(color[i]==-1){
	                  if(!bipartite(i,color,adj)) return 0;
	            }
	    }
	    return true;
	}
};
*********************************************************************************************8
