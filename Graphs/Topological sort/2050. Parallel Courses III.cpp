#include<iostream>
#include<queue>
#include<cmath>
#include<climits>
#include<vector>
#include<vector>
#include<algorithm>
using namespace std;
int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int>indegree(n,0);
        vector<int>adj[n];
        for(auto &x:relations){
             int u = x[0]-1;
             int v = x[1]-1;
             adj[u].push_back(v);
             indegree[v]++;
        }
        queue<int>q;
        vector<int>maxtime(n,0);
        for(int i =0;i<n;i++){
            if(indegree[i]==0) {
                q.push(i);
                maxtime[i]=time[i];
            }
        }
        int ans = 0;
        while(!q.empty()){
                int node = q.front();
                q.pop();
                for(auto &nbr:adj[node]){
                    indegree[nbr]--;
                     maxtime[nbr] = max(maxtime[nbr],maxtime[node]+time[nbr]);
                    if(indegree[nbr]==0){
                         q.push(nbr);
                    }
                }
             }
     return *max_element(maxtime.begin(),maxtime.end());
    }

int main(){
    int n;
    cout << "Enter the number of courses: ";
    cin >> n;
    
    int numRelations;
    cout << "Enter the number of relations: ";
    cin >> numRelations;
    
    vector<vector<int>> relations(numRelations, vector<int>(2));
    cout << "Enter the relations (prerequisite, course):" << endl;
    for (int i = 0; i < numRelations; ++i) {
        cin >> relations[i][0] >> relations[i][1];
    }
    
    vector<int> time(n);
    cout << "Enter the time for each course:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> time[i];
    }
    
    cout<<minimumTime(n,relations,time);
}

// Input: n = 3, relations = [[1,3],[2,3]], time = [3,2,5]
// Output: 8
