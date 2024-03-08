class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>temp;
        for(auto &x:mp){
            temp.push_back(x.second);
        }
        sort(temp.begin(), temp.end(), greater<int>()); //ascending order
        int ans = 0;
        int f = temp[0];
        for(int i =1;i<temp.size();i++){
            if(temp[i]==f){
                ans +=temp[i];
            }else break;
        }
        return ans+f;
    }
};
******************************************************
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int>mp(101,0);
        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxi  = INT_MIN;
        for(int i =0;i<mp.size();i++){
            maxi = max(maxi,mp[i]);
        }
        int count = 0;
        for(int i =0;i<mp.size();i++){
            if(mp[i]==maxi) count++;
        }
        return maxi*count;
    }
};
