// 2 == 0 1 0
// 1 == 0 0 1
// 3 == 0 1 1
// 4 == 1 0 0
// xor= 1 0 0  
// k =  0 0 1  // no of flip to make k == xor
// 2997. Minimum Number of Operations to Make Array XOR Equal to K

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
    int minOperations(vector<int>& nums, int k) {
        int x = 0;
        for(int i =0;i<nums.size();i++){
             x = x^nums[i];
        }
        int y = x^k;
        int n = __builtin_popcount(y);
        return n;
    }
    int main(){
         int n,k; cin>>n>>k;
         vector<int>nums(n);
         for(int i =0;i<n;i++){
              cin>>nums[i];
         }
         cout<<minOperations(nums,k);
         return 0;
    }
