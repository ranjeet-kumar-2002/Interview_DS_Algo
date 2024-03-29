#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
using namespace std;
void bubblesort(vector<int>&nums){
     int n = nums.size();
     for(int i = 0;i<n-1;i++){
          bool flag = false;
          for(int j = 0;j<n-1-i;j++){
               if(nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                    flag  = true;
               }
          }
          if(flag==false) break;
     }
}
int main(){
     int n;cin>>n;
     vector<int>nums(n);
     for(int i = 0;i<n;i++){
          cin>>nums[i];
     }
     bubblesort(nums);
     for(int i = 0;i<n;i++){
          cout<<nums[i]<<" ";
     }
     return 0;
}
