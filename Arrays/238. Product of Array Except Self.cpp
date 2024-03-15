// nums = [1,2,3,4]
// left   [1,1,2,6]   // prefix product
// irhgt  [24,12,4,1] // suffix product

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,1);
        vector<int>right(n,1);
        for(int i =1;i<n;i++){
            left[i] = nums[i-1]*left[i-1];
        }
        for(int i = n-2;i>=0;i--){
             right[i] = nums[i+1]*right[i+1];
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(left[i]*right[i]);
        }
        return ans;
    }

};
******************************************************************
nums = [1,2,3,4]
left   [1,1,2,6]   // prefix product
irhgt  [24,12,4,1] // suffix product

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n);
        left[0] = 1;
        for(int i = 1;i<n;i++){
            left[i] = nums[i-1]*left[i-1];
        }
        int pro = 1;
        for(int i = n-1;i>=0;i--){
             left[i] = left[i]*pro;
             pro = pro*nums[i];
        }
        return left;
       
    }
};

****************************************************************
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>left(n,1);
        for(int i = 1;i<n;i++){
            left[i] = nums[i-1]*left[i-1];
        }
        int pro = 1;
        for(int i = n-1;i>=0;i--){
             left[i] = left[i]*pro;
             pro = pro*nums[i];
        }
        return left;
       
    }
};
