#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include <algorithm>
using namespace std;
long long countSubarrays(vector<int>&nums,int k){
    int maxCount = 0 ,i = 0,j = 0;
    long long ans = 0;
    int n = nums.size();
    int maxi = *max_element(nums.begin(),nums.end());
    while(j<n){
         if(nums[j]==maxi) maxCount++;
         while(maxCount>=k){
             ans +=n-j;
             if(maxi==nums[i]) maxCount--;
             i++;
         }
         j++;
    }
    return ans;
}
int main(){
     int n;cin>>n;
     int k ; cin>>k;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
         cin>>nums[i];
     }
     cout<<countSubarrays(nums,k);
     return 0;
}

// Input: nums = [1,3,2,3,3], k = 2
// Output: 6

****************************************************************************
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i = 0,j = 0,maxElementCount = 0; 
        int n = nums.size();
        long long ans = 0;
        int maxElement = *max_element(nums.begin(),nums.end());
        while(j<n){
             if(maxElement==nums[j]) maxElementCount++;
             while(maxElementCount>=k){
                  ans +=n-j;
                  if(maxElement==nums[i]) maxElementCount--;
                  i++;
             }
             j++;
        }
        return ans;
    }
};

