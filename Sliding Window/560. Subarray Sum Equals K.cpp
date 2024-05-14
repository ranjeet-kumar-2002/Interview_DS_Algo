//560. Subarray Sum Equals K
#include<iostream>
#include<unordered_map>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int prefixsum = 0;
        int ans = 0;
        for(int i =0;i<nums.size();i++){
             prefixsum+=nums[i];
             if(mp.find(prefixsum-k)!=mp.end()){
                 ans += mp[prefixsum-k];
                 mp[prefixsum]++;
             }else{
                  mp[prefixsum]++;
             }
        }
        return ans;
    }
};

int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i =0;i<n;i++) cin>>nums[i];
     int k;cin>>k;
     Solution obj;
     cout<<obj.subarraySum(nums,k);
     return 0;
}
