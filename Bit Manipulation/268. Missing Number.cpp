class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int sum = 0;
       int naturesum = n*(n+1)/2;
       for(int i =0;i<n;i++){
           sum +=nums[i];
       }
       return naturesum-sum;
    }
};
**************************************************************
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] == i) continue; 
             else return i;
        }
        return n; // If no number is missing, return n
    }
};
