
// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indegree(n+1,0);
        vector<int>outdegree(n+1,0);
        for(auto &x:trust){
           int u = x[0];
           int v = x[1];
           indegree[v]++;
           outdegree[u]++;
        }
        for(int i = 1;i<=n;i++){
            if(outdegree[i]==0 && indegree[i]==n-1) return i;
        }
        return -1;
    }
};


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>indegree(n+1,0);
        for(auto &x:trust){
           int u = x[0];
           int v = x[1];
           indegree[v]++;
           indegree[u]--;
        }
        for(int i = 1;i<=n;i++){
           if(indegree[i]==n-1) return i;
        }
        return -1;
    }
};


class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>indegree;
        unordered_map<int,int>outdegree;
        for(int i =1;i<=n;i++){
             indegree[i]=0;
             outdegree[i]=0;
        }
        for(auto t:trust){
             int src =t[0]; // first outdegere
             int des =t[1] ;//  second indegree 
             outdegree[src]++;
             indegree[des]++;
        }
        for(auto x:indegree){
            int person = x.first;
            int inDeg = x.second;
            int outDeg = outdegree[person];
            if (inDeg == n - 1 && outDeg == 0) {
                return person;
            }
        }
        return -1;
    }
};
