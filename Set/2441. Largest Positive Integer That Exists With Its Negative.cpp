// 2441. Largest Positive Integer That Exists With Its Negative
#include<iostream>
#include<climits>
#include<cmath>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>st;
        st.insert(nums.begin(),nums.end());
       int temp = INT_MIN;
       for(int i = 0;i<nums.size();i++){
          if(nums[i]>0){
              if(st.find(-nums[i])!=st.end()){
                  temp = max(temp,nums[i]);
              }
          }
       }
       return temp==INT_MIN ? -1 : temp;
    }
};

int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i =0;i<n;i++){
         cin>>nums[i];
     }
     Solution obj;
     cout<<obj.findMaxK(nums);
     return 0;
}

// Input: nums = [-1,2,-3,3]
// Output: 3
