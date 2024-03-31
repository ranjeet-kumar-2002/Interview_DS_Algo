#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
#include<climits>
#include<algorithm>
#include<unordered_set>
using namespace std;
int countSubarrays(vector<int>nums,int minK,int maxK){
       int minKIndx = -1;
       int maxKIndx = -1;
       int badIndx = -1;
       int count = 0;
       for(int i = 0;i<nums.size();i++){
            if(nums[i]==minK) minKIndx = i;
            if(nums[i]==minK) maxKIndx = i;
            if(nums[i]<minK || nums[i]>maxK) badIndx = i;
            int mini = min(minKIndx,maxKIndx);
            int check = mini-badIndx;
            if(check<=0) count +=0;
            else count +=check;
       }
       return count;
}
int main(){
     int n;cin>>n;
     int minK,maxK;cin>>minK>>maxK;
     vector<int>nums(n);
     for(int i =0;i<n;i++){
          cin>>nums[i];
     }
     cout<<countSubarrays(nums,minK,maxK);
     return 0;
}

// nums = [1,1,1,1], minK = 1, maxK = 1
// Output: 10

//  nums = [1,3,5,2,7,5], minK = 1, maxK = 5
// Output: 2

****************************************************************************************
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int mikIndx = -1;
        int maxkIndx = -1;
        int badBoundary = -1;
        long long count = 0;
        for(int i = 0;i<nums.size();i++){
             if(nums[i]==minK) mikIndx = i;
             if(nums[i]==maxK) maxkIndx = i;
             if(nums[i]<minK || nums[i]>maxK) badBoundary = i;
             int mini = min(mikIndx,maxkIndx);
             int check = mini-(badBoundary);
             if(check<=0) count +=0;
             else count +=check;
        }
        return count;
    }
};
