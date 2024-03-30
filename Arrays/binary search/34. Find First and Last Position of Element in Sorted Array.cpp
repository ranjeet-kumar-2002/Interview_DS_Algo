#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
#include<queue>

using namespace std;
int bsl(vector<int>&nums,int key){
      int lastocc = -1;
     int l = 0;
     int r = nums.size()-1;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(nums[mid]==key){
               lastocc = mid;
               l = mid+1;
          }else if(nums[mid]<key){
               l = mid+1;
          }else r = mid-1;
     }
     return lastocc;
}
int bsf(vector<int>&nums,int key){
     int firstocc = -1;
     int l = 0;
     int r = nums.size()-1;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(nums[mid]==key){
               firstocc = mid;
               r = mid-1;
          }else if(nums[mid]<key){
               l = mid+1;
          }else r = mid-1;
     }
     return firstocc;
}
int main(){
     int n; cin>>n;
     int key;cin>>key;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     vector<int>ans = {bsf(nums,key),bsl(nums,key)};
     for(int i = 0;i<ans.size();i++){
          cout<<ans[i]<<" ";
     }
     return 0;
}

// 6 
// 8
// 5 7 7 8 8 10
// 3 4
******************************************************************************
class Solution {
public:
   int bsf(vector<int>&nums,int target){
         int firsoc = -1;
         int l = 0;
         int r= nums.size()-1;
         while(l<=r){
             int mid = l+(r-l)/2;
             if(nums[mid]==target){
                 firsoc = mid;
                 r = mid-1;
             }else if(nums[mid]<target){
                 l = mid+1;
             }else r = mid-1;
         }
         return firsoc;
    }
    int bsl(vector<int>&nums,int target){
         int lastoc = -1;
         int l = 0;
         int r = nums.size()-1;
         while(l<=r){
             int mid = l+(r-l)/2;
             if(nums[mid]==target){
                 lastoc = mid;
                 l = mid+1;
             }else if(nums[mid]<target) l = mid+1;
             else r = mid-1;
         }
         return lastoc;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         return {bsf(nums,target),bsl(nums,target)};
    }
};

34. Find First and Last Position of Element in Sorted Array
