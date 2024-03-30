//35. Search Insert Position

#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
#include<queue>
using namespace std;
int bsinsetion(vector<int>&nums,int key){
     int indx = nums.size();
     int l = 0;
     int r = nums.size()-1;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(nums[mid]==key) {
               indx = mid;break;
          }else if(nums[mid]>key){
               indx = mid;
               r = mid-1;
          }else l = mid+1;
     }
     return indx;
}
int main(){
     int n; cin>>n;
     int key;cin>>key;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     cout<<bsinsetion(nums,key);
     return 0;
}
*******************************************************************
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
             int mid = l+(r-l)/2;
             if(nums[mid]==target) return mid;
             else if(nums[mid]<target) l = mid+1;
             else r = mid-1;
        }
        return l;
    }
};
**********************************************************************************
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        int indx = nums.size();
        while(l<=r){
             int mid = l+(r-l)/2;
             if(nums[mid]==target) return mid;
             else if(nums[mid]>target) {
                 indx = mid;
                 r = mid-1;
             }
             else l = mid+1;
        }
        return indx;
    }
};
