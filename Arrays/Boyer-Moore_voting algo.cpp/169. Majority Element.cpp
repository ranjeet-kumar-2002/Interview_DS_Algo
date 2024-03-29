*******************************************************************************************
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
int majority_element(vector<int>&nums){
    int n = nums.size();
     int count = 0;
     int maj = nums[0];
     for(int i = 0;i<n;i++){
          if(nums[i]==maj){
               count++;
          }else if(nums[i] !=maj) count--;
          else if(count == 0){
               maj = nums[i];
               count = 1;
          }
     }
     // verification
     count = 0;
     for(int i = 0;i<n;i++){
         if(maj==nums[i]) count++;
     }
     if(n/2<count) return maj;
     return 0;
}
int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     cout<<majority_element(nums);
     return 0;
}


// 169. Majority Element
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
***********************************************************************************************
// assume first element as ans ans set count =1
// if same element comes the increase the count else decrease by 1
// if count bwcame zero then set the assume element another element ans set the count as 1
// at the we can verify also with the ME
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int me = nums[0];
         int count = 1;
         for(int i =1;i<nums.size();i++){
             if(me==nums[i]) count++;
             if(me !=nums[i]) count--;
             if(count == 0){
                 me = nums[i];
                 count = 1;
             }
         }
      return me;
    }
};

***************************************************************************************************

class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int me = nums[0];
         int count = 1;
         for(int i =1;i<nums.size();i++){
             if(me==nums[i]) count++;
             if(me !=nums[i]) count--;
             if(count == 0){
                 me = nums[i];
                 count = 1;
             }
         }
        // verification
        count = 0;
        for(int i = 0;i<nums.size();i++){
             if(me==nums[i]) count++;
        }
        if(nums.size()/2<count) return me;
        return 0;
    }
};

***************************************************
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
*****************************************************
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto &x:nums) mp[x]++;
       int y = nums.size()/2;
       for(auto &x:mp){
           if(x.second>y) return x.first;
       }
       return 0;
    }
};
