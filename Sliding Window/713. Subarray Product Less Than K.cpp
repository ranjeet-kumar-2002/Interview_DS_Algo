#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k==0 || k==1) return 0;
        int product = 1;
        int ans = 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            product *= nums[j];
            if (product < k) ans += j - i + 1;
            if (i<nums.size() && product >= k) {
                while (i<nums.size() && product>=k) {
                    product = product / nums[i];
                    i++;
                }
               ans += j - i + 1;
            }
        }
        return ans;
    }
};
//Input: nums = [10,5,2,6], k = 100 
int main(){
     int n,k;cin>>n>>k;
     vector<int>nums(n);
     for(int i =0;i<n;i++) cin>>nums[i];
     Solution obj;
     cout<<obj.numSubarrayProductLessThanK(nums,k);
     return 0;
}
