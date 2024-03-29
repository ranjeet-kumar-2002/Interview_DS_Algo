// Input: nums = [3,2,3]
// Output: [3]

#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
vector<int> majority(vector<int>&nums){
     int count1 = 0,count2 = 0,maj2 = 0,maj1= 0;
      int n = nums.size();
     for(int i = 0;i<n;i++){
          if(maj1==nums[i]) count1++;
          else if(maj2==nums[i]) count2++;
          else if(count1==0){
               maj1 = nums[i];
               count1 = 1;
          }else if(count2==0){
               maj2 = nums[i];
               count2 = 1;
          }else {
               count1--;
               count2--;
          }
     }
     // verification
     count1=0; count2 = 0;
     for(int i = 0;i<n;i++){
          if(nums[i]==maj1) count1++;
          if(nums[i]==maj2) count2++;
     }
     vector<int>ans;
    if(n/3<count1) ans.push_back(maj1);
    if(n/3<count2) ans.push_back(maj2);
    return ans;
}
int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     vector<int> temp = majority(nums);
     for(int i= 0;i<temp.size();i++){
          cout<<temp[i]<<endl;
     }
     return 0;
}

*********************************************************************************************


229. Majority Element II
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &x:nums) mp[x]++;
        vector<int>ans;
        int y = nums.size()/3;
        for(auto &x:mp){
            if(x.second>y) ans.push_back(x.first);
        }
        return ans;
    }
};

*******************************************************************************************
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
     int n = nums.size();
     int count1 = 0;
     int count2 = 0;
     int maj1 = 0;
     int maj2 = 0;
     for(int i = 0;i<n;i++){
         if(maj1==nums[i]) count1++;
         else if(maj2==nums[i]) count2++;
         else if(count1==0) {
             maj1=nums[i];
             count1 = 1;
         }else if(count2==0){
             maj2 = nums[i];
             count2 = 1;
         }else {
             count1--;
             count2--;
         }
     }

     // verificaation
     count1 = 0;
     count2 = 0;
     for(int i = 0;i<n;i++){
         if(maj1==nums[i]) count1++;
         if(maj2==nums[i]) count2++;
     }
     vector<int>ans;
     if(n/3<count1) ans.push_back(maj1);
     if(n/3<count2) ans.push_back(maj2);
     if(maj1==0 && maj2==0) return {0};
     return ans;
    }
};
