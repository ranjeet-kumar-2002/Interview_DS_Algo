//Array to BST

class Solution {
public:
    void f(vector<int>& nums, vector<int>&ans,int start,int end){
        if(start>end) return;
        int mid = start+(end-start)/2;
        ans.push_back(nums[mid]);
        f(nums,ans,start,mid-1);
        f(nums,ans,,end);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
      vector<int>ans;
      int n = nums.size();
      f(nums,ans,0,n-1);
      return ans;
    }
};
