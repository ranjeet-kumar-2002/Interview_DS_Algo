#include<iostream>
#include<queue>
#include<vector>
#include<climits>
#include<algorithm>
#include<cmath>
using namespace std;
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	   vector<int>adj[N];
	   vector<int>indegree(N,0);
	   for(auto &x:prerequisites){
	       int u = x.first;
	       int v = x.second;
	       adj[v].push_back(u);
	       indegree[u]++;
	   }
	   queue<int>q;
	   for(int i = 0;i<N;i++){
	        if(indegree[i]==0) {
	            q.push(i);
	        }
	   }
	   
	   int count = 0;
	   while(!q.empty()){
	        int node = q.front();q.pop();
	        count++;
	        for(auto &nbr:adj[node]){
	             indegree[nbr]--;
	             if(indegree[nbr]==0){
	                 q.push(nbr);
	             }
	        }
	   }
	   return N==count;
	}
int main(){
    int N, P;
    cin >> N >> P;
    vector<pair<int, int>> prerequisites;
    for(int i = 0; i < P; i++){
        int f, s;
        cin >> f >> s;
        prerequisites.push_back({f, s});
    }
   cout<<isPossible(N,P,prerequisites);
}

// N = 4, P = 3
// prerequisites = {{1,0},{2,1},{3,2}}


**********************************************************************

class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	   vector<int>adj[N];
	   vector<int>indegree(N,0);
	   for(int i = 0;i<P;i++){
	       int u = prerequisites[i].first;
	       int v = prerequisites[i].second;
	       adj[v].push_back(u);
	       indegree[u]++;
	   }
	   queue<int>q;
	   for(int i = 0;i<N;i++){
	        if(indegree[i]==0) {
	            q.push(i);
	        }
	   }
	   
	   int count = 0;
	   while(!q.empty()){
	        int node = q.front();q.pop();
	        count++;
	        for(auto &nbr:adj[node]){
	             indegree[nbr]--;
	             if(indegree[nbr]==0){
	                 q.push(nbr);
	             }
	        }
	   }
	   return N==count;
	}
};
*******************************************************************************
