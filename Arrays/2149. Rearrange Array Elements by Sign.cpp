class Solution {

public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<pair<int,int>>positive;
        vector<pair<int,int>>negative;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>=0)positive.push_back({i,nums[i]});
            else negative.push_back({i,nums[i]});
        }
        sort(positive.begin(),positive.end());
        sort(negative.begin(),negative.end());
        vector<int>ans;
        for(int i = 0;i<positive.size();i++){
            auto x = positive[i];
            auto y = negative[i];
            ans.push_back(x.second);
            ans.push_back(y.second);
        }
        return ans;
    }
};

