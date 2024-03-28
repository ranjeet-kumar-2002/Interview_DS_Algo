2958. Length of Longest Subarray With at Most K Frequency
//******************************* TLE********************
class Solution {
public:
    bool check(unordered_map<int,int>&mp,int k){
        bool flag = true;
         for(auto &m:mp){
             if(m.second>k){
                 return false;
             }
         }
         return flag;
    }
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i = 0, j = 0;
        int maxi = INT_MIN;
        while(j<nums.size()){
             mp[nums[j]]++;
             if(check(mp,k)){
                 maxi = max(maxi,j-i+1);
             }else{
                 mp[nums[i]]--;
                 i++;
                 if(check(mp,k)) maxi = max(maxi,j-i+1);
             }
             j++;
        }
        return maxi;
    }
};

//*****************************LENTHY CODE***************************
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i = 0, j = 0;
        int maxi = INT_MIN;
        while(j<nums.size()){
             mp[nums[j]]++;
             if(mp[nums[j]]<=k){
                 maxi = max(maxi,j-i+1);
             }
             else if(mp[nums[j]]>k){
                 while(mp[nums[j]]>k){
                       mp[nums[i]]--;
                       i++;
                 }
                 maxi = max(maxi,j-i+1);
             }
             j++;
        }
        return maxi;
    }
};



**************************READEABLE************************
O(n)
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i = 0, j = 0;
        int maxi = INT_MIN;
        while(j<nums.size()){
                 mp[nums[j]]++;
                 while(mp[nums[j]]>k){
                       mp[nums[i]]--;
                       i++;
                 }
                 maxi = max(maxi,j-i+1);
                 j++;
        }
        return maxi;
    }
};



class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int i = 0;
        int maxi = INT_MIN;
        for(int j =0;j<nums.size();j++){
                 mp[nums[j]]++;
                 while(mp[nums[j]]>k){
                       mp[nums[i]]--;
                       i++;
                 }
                 maxi = max(maxi,j-i+1);
        }
        return maxi;
    }
};


