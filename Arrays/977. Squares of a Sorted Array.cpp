// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         for(int i =0;i<nums.size();i++){
//             nums[i] = nums[i]*nums[i];
//         }
//         sort(nums.begin(),nums.end());
//         return nums;
//     }
// };

//977. Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size()-1;
        vector<int>ans;
        while(i<=j){
           int start = nums[i]*nums[i];
           int end = nums[j]*nums[j];
           if(start<end){
                ans.push_back(end);
                j--;
           }
           else {
               ans.push_back(start) ;
               i++;
           }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
