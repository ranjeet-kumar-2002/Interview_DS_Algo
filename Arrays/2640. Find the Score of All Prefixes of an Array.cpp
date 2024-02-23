class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
         vector<long long> temp;
         int maxi = INT_MIN;
         for(int i = 0;i<nums.size();i++){
             if(maxi<nums[i]){
                 maxi = nums[i];
             }
             temp.push_back(nums[i]+maxi);
         }
         vector<long long>ans;
         long long currsum = 0;
         for(int i =0;i<temp.size();i++){
             currsum +=temp[i];
             ans.push_back(currsum);
         }
         return ans;
    }
};
