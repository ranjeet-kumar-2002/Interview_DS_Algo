////Zero Sum Subarrays
#include<iostream>
#include<unordered_map>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
class Solution{
public:
    long long int findSubarray(vector<long long int> &arr, int n ) {
       unordered_map<int,int>mp;
       mp[0] = 1; // inialization
       int ans = 0;
       int prefix = 0;
       for(int i = 0;i<arr.size();i++){
           prefix +=arr[i];
            if(mp.find(prefix) !=mp.end()){
                 ans +=mp[prefix];
                 mp[prefix]++;
            }else {
                  mp[prefix]++;
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
