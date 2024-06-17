#include<iostream>
#include<queue>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
#include<string>
using namespace std; 

string findOrder(string dict[], int N, int K) {
        vector<int> adj[K];
        vector<int> indegree(K, 0);
        // building the graph
        for (int i = 0; i < N - 1; i++) {
            string s1 = dict[i];
            string s2 = dict[i + 1];
            int k = 0;
            int j = 0;
            while (k < s1.length() && j < s2.length() && s1[k] == s2[j]) {
                k++;
                j++;
            }
            if (k < s1.length() && j < s2.length()) {
                adj[s1[k] - 'a'].push_back(s2[j] - 'a');
                indegree[s2[j] - 'a']++;
            }
        }
        
        // Initialize the queue with nodes that have 0 indegree
        queue<int> q;
        for (int i = 0; i < K; i++) {
            if (indegree[i] == 0) q.push(i);
        }
        // Perform topological sort
        string ans = "";
        while (!q.empty()) {
            int node = q.front(); q.pop();
            ans +=(node + 'a');
            for (auto &nbr : adj[node]) {
                indegree[nbr]--;
                if (indegree[nbr] == 0) {
                    q.push(nbr);
                }
            }
        }
        
        return ans;
    }

int main(){
   int N,K;cin>>N>>K;
   string dict[N];
   for(int i= 0;i<N;i++){
        string s;
        cin>>s;
        dict[i]=s;
   }
   cout<<findOrder(dict,N,K);
}
