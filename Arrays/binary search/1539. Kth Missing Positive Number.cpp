#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
#include<algorithm>
#include<unordered_set>
using namespace std;
int kthpositive(vector<int>&nums,int k){
     unordered_set<int>st;
     int count = 0;
     for(int i = 0;i<nums.size();i++){
          st.insert(nums[i]);
     }
     for(int i = 1;i<=nums.size()+k;i++){
          if(st.find(i)==st.end()) count++;
          if(count == k) return i;
     }
     return 0;
}
int main(){
     int n;cin>>n;
     int k;cin>>k;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     cout<<kthpositive(nums,k);
}
**********************************************************************************

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_set<int>st;
        int count = 0;
        for(auto &x:arr) st.insert(x);
        for(int i =1; i<=arr.size()+k;i++){
             if(st.find(i) == st.end()) count++;
             if(count==k) return i;
        }
        return 0;
    }
};
