//53. Maximum Subarray

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int curr_sum = 0;
        for(int i = 0;i<nums.size();i++){
         curr_sum = curr_sum+nums[i];
         maxi = max(maxi,curr_sum);
         if(curr_sum<0)
             curr_sum = 0;
        }
        return maxi;
    }
};

//nums = [-2,1,-3,4,-1,2,1,-5,4]
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int curr_sum = 0;
        for(int i = 0;i<nums.size();i++){
         curr_sum = curr_sum+nums[i];
         maxi = max(maxi,curr_sum);
         if(curr_sum<0)
             curr_sum = 0;
        }
        return maxi;
    }
int main(){
     int n;cin>>n;
     vector<int>arr(n);
     for(int i = 0;i<n;i++){
         cin>>arr[i];
     }
     cout<<maxSubArray(arr);
     return 0;
}
