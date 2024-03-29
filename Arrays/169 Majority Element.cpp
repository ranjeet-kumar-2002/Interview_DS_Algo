class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
**********************************************
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(auto &x:nums) mp[x]++;
       int y = nums.size()/2;
       for(auto &x:mp){
           if(x.second>y) return x.first;
       }
       return 0;
    }
};
*****************************************
// boYER moore voting algorithms
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int majority = nums[0];
      int count = 1;
      for(int i =1;i<nums.size();i++){
          if(majority==nums[i]) count++;
          else if(count ==0){
              majority= nums[i];
              count = 1;
          }
          else count--;
      }
      
      return majority;
    }
};
