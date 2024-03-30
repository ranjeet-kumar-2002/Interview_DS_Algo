
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l =0 ;
        int r  = nums.size()-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]>target){
                r = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }else return mid;
        }
        return -1;
    }
};

**********************************************************************************************
class Solution {
public:
    int f(vector<int>&nums,int l , int r, int target){
        if(l>r) return -1;
        int mid  = l+(r-l)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target){
            return f(nums,l,mid-1,target);
        }else {
            return f(nums,mid+1,r,target);
        }
    }
    int search(vector<int>& nums, int target) {
       return f(nums,0,nums.size()-1,target);
    }
};
*************************************************************************************************
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
#include<queue>
using namespace std;
int binarySearch(vector<int>&nums,int key){
     int l = 0;
     int r = nums.size()-1;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(nums[mid]==key) return mid;
          else if(nums[mid]<key) l = mid+1;
          else r = mid-1;
     }
     return -1; //-1,0,3,5,9,12
}
int main(){
     int n;cin>>n;
     int key;cin>>key;
     vector<int>nums(n);
     for(int i =0;i<n;i++){
          cin>>nums[i];
     }
     cout<<binarySearch(nums,key);
     return 0;
}
