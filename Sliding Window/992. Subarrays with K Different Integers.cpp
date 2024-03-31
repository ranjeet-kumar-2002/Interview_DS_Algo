#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
#include<unordered_map>
#include<algorithm>
#include<unordered_set>

using namespace std;
    int count(vector<int>&nums,int k){
         unordered_map<int,int>mp;
         int subcount = 0;
         int i = 0;
         int j = 0;
         while(j<nums.size()){
             mp[nums[j]]++;
             while(mp.size()>k){
                 mp[nums[i]]--;
                 if(mp[nums[i]]==0) mp.erase(nums[i]);
                 i++;
             }
             if(mp.size()<=k){
                 subcount +=j-i+1;
             }
             j++;
         }
         return subcount;
    }
    
int main(){
    int n;cin>>n;
    int k;cin>>k;
    vector<int>nums(n);
    for(int i = 0;i<n;i++){
         cin>>nums[i];
    }
    int totalcount = count(nums,k);
    int totalcountoneless = count(nums,k-1);
    cout<<totalcount-totalcountoneless;
    return 0;
}

// nums = [1,2,1,2,3], k = 2
// Output: 7

***********************************************************************************************




//992. Subarrays with K Different Integers

class Solution {
public:
    int count(vector<int>&nums,int k){
         unordered_map<int,int>mp;
         int subcount = 0;
         int i = 0;
         int j = 0;
         while(j<nums.size()){
             mp[nums[j]]++;
             while(mp.size()>k){
                 mp[nums[i]]--;
                 if(mp[nums[i]]==0) mp.erase(nums[i]);
                 i++;
             }
             if(mp.size()<=k){
                 subcount +=j-i+1;
             }
             j++;
         }
         return subcount;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int allcount = count(nums,k);
        int allcountless = count(nums,k-1);
        return allcount-allcountless;
    }
};
