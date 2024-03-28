#include<iostream>
#include<vector>
#include<queue>
using namespace std;
long long MinimumCostofropes(long long arr[], long long n){
priority_queue<long long,vector<long long>,greater<long long>>pq;
for(int i = 0;i<n;i++) pq.push(arr[i]);
long long ans = 0;
while(pq.size() !=1){
    long long first = pq.top();pq.pop();
    long long second = pq.top();pq.pop();
    long long sum = first+second;
    ans +=sum;
    pq.push(sum);
 }
 return ans;
}
int main(){
     long long n; cin>>n;
     long long arr[n];
     for(int i =0;i<n;i++){
          cin>>arr[i];
     }
     cout<<MinimumCostofropes(arr,n);
     return 0;
}

// n = 5
// arr[] = {4, 2, 7, 6, 9}
***************************************************************************
class Solution{
    public:
    long long minCost(long long arr[], long long n) {
        priority_queue<long long,vector<long long>,greater<long long>>pq;
        for(int i = 0;i<n;i++) pq.push(arr[i]); //O(n)
        long long ans = 0;
        while(pq.size()!=1){  //O(nlogn)
             long long first = pq.top(); pq.pop();
             long long second = pq.top(); pq.pop();
             long long sum  = first+second;
             ans += sum;
             pq.push(sum);
        }
        return ans;
    }
};


