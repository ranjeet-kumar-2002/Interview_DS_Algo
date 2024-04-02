#include<iostream>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<climits>
#include<vector>
using namespace std;
int main(){
     int n;int m;
     cin>>n; cin>>m;
     vector<int>a(n);
     vector<int>b(m);
     for(int i =0;i<n;i++) cin>>a[i];
     for(int i =0;i<m;i++) cin>>b[i];
     priority_queue<int>pq;
     for(int i =0;i<n;i++) pq.push(a[i]);
     for(int i =0;i<m;i++) pq.push(b[i]);
     vector<int>ans;
     while(!pq.empty()){
          cout<<pq.top()<<" ";pq.pop();
     }
     return 0;
}

//Merge two binary Max heaps
class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
      priority_queue<int>pq;
      for(int i = 0;i<n;i++)pq.push(a[i]);
      for(int i = 0;i<m;i++)pq.push(b[i]);
      vector<int>ans;
      while(!pq.empty()){
           ans.push_back(pq.top());pq.pop();
      }
      return ans;
    }
};
