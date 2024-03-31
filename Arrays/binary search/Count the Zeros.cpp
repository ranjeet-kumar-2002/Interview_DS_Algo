*********************************************************************************************
#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
int bsf(vector<int>&nums,int key){
     int l = 0;int r = nums.size()-1;
     int ans = -1;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(nums[mid]==key){
               ans = mid;
               r  = mid-1;
          }else if(nums[mid]>key){
               l = mid+1;
          }else r = mid-1;
     }
     return ans;
}
int bsl(vector<int>&nums,int key){
     int l = 0; int r = nums.size()-1;
     int ans = -1;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(nums[mid]==key){
               ans = mid;
               l = mid+1;
          }else if(nums[mid]>key){
               l = mid+1;
          }else r = mid-1;
     }
     return ans;
}
int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     int first = bsf(nums,0);
     int last = bsl(nums,0);
     if(first == -1 || last == -1) cout<<"0"<<endl;
     cout<<last-first+1;
     return 0;
}
**************************************************************************************************
class Solution{   
public:
    int bsf(int arr[],int n ,int x){
         int l = 0; int r = n-1;
         int ans = -1;
         while(l<=r){
              int mid = l+(r-l)/2;
              if(arr[mid]==x){
                   ans = mid;
                   r = mid-1;
              }else if(arr[mid]<x){
                    r= mid-1;
              }else l = mid+1;
         }
         return ans;
    }
    int bsl(int arr[],int n, int x){
         int l = 0; int r = n-1;
         int ans = -1;
         while(l<=r){
              int mid = l+(r-l)/2;
              if(arr[mid]==x){
                  ans = mid;
                  l = mid+1;
              }else if(arr[mid]<x){
                  r = mid-1;
              }else l = mid+1;
         }
         return ans;
    }
    int countZeroes(int arr[], int n) {
       int first = bsf(arr,n,0);
       int last = bsl(arr,n,0);
       if(first == -1 || last==-1) return 0;
       return last-first+1;
    }
};
