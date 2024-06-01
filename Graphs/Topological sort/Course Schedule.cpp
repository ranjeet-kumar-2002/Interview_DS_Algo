#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites){
       vector<int>adj[n];
       vector<int>indegree(n,0);
       for(int i = 0;i<prerequisites.size();i++){
           int u = prerequisites[i][0];
           int v = prerequisites[i][1];
           adj[v].push_back(u);
           indegree[u]++;
       }
       queue<int>q;
       for(int i = 0;i<n;i++){
            if(indegree[i]==0) q.push(i);
       }
       
       vector<int>ans;
       while(!q.empty()){
            int node = q.front();q.pop();
            ans.push_back(node);
            for(auto &nbr:adj[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                     q.push(nbr);
                }
            }
       }
      if(ans.size()==n) return ans;
      return {};
       
    }
int main(){
     int m,n;cin>>m>>n;
     vector<vector<int>>prerequisites(m,vector<int>(n));
     for(int i =0;i<m;i++){
         for(int j =0;j<n;j++){
             cin>>prerequisites[i][j];
         }
     }
     int vertex,edges;
     cout<<"enter vertex and edges"<<endl;
     cin>>vertex>>edges;
     vector<int>ans = findOrder(vertex,edges,prerequisites);
     for(auto &x:ans) cout<<x<<endl;
     return 0;
}


*********************************************************************************

class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> prerequisites){
      vector<int>adj[n];
      vector<int>indegree(n,0);
      for(auto &x:prerequisites){
          int u = x[0];
          int v = x[1];
          adj[v].push_back(u);
          indegree[u]++;
      }
      queue<int>q;
      for(int i = 0;i<n;i++){
            if(indegree[i]==0) q.push(i);
      }
       
      vector<int>ans;
      while(!q.empty()){
            int node = q.front();q.pop();
            ans.push_back(node);
            for(auto &nbr:adj[node]){
                indegree[nbr]--;
                if(indegree[nbr]==0){
                     q.push(nbr);
                }
            }
      }
      if(ans.size()==n) return ans;
      return {};
       
    }
};
******************************************************************************************
