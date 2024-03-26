442. Find All Duplicates in an Array
// 1 <= nums[i] <= n [1,n] use the nums element as indx 
// Each element in nums appears once or twice.
You must write an algorithm that runs in O(n) time and uses only constant extra space.
************************************************
we can use sorting 
we can use the map
we can use set
we can element of nums as index
**************************************************

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] < 0) {
                ans.push_back(idx + 1);
            } else {
                nums[idx] = -1 * nums[idx];
            }
        }
        return ans;
    }
};

********************************************************
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int>ans;
       unordered_map<int,int>mp;
       for(auto&x:nums) mp[x]++;
       for(auto&m:mp){
         if(m.second==2) ans.push_back(m.first);
       }
       return ans;
    }
};

