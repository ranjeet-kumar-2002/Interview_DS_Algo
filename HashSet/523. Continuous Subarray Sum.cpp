#include<iostream>
#include<vector>
#include<unordered_map>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;

//*****************************modulo ki jay ho*****************************
// 31%4 == 3 and if we will add multiple of 4 so it will not affect (31+8)%4==3 and (31+12)%4 == 3
//Input: nums = [23,2,4,6,7], k = 6
//  23%6==5
//  (23+2)%6==1
//  (23+2+4)%6==5 already sean so (2+4) it is multiple of k or 6
// also we need to inially map with zero also

    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = -1;  // cornercase 
        int prefixsum = 0;
        for(int i =0;i<nums.size();i++){
             prefixsum +=nums[i];
             int rem = prefixsum%k;
             if(mp.find(rem)==mp.end()){
                mp[rem] = i;
             }else {
                 if((i-mp[rem])>=2) return true;
             }
        }
        return false;
    }
int main(){
    int n;cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
         cin>>nums[i];
    }
    int k;cin>>k;
    cout<<checkSubarraySum(nums,k);
    return 0;
}

// Input: nums = [23,2,4,6,7], k = 6
// Output: true
