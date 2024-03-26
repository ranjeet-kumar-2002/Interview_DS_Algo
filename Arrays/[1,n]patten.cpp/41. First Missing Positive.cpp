//41. First Missing Positive
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int n = nums.size();
       unordered_set<int>st;
       for(int i = 0;i<n;i++){
         if(nums[i]>0) st.insert(nums[i]);
       }
       for(int i =1;i<=100001;i++){
         if(st.find(i) == st.end()) return i;
       }
       return 0;
    }
};
****************************************************************

// This problem also related to the [1,n] patterns
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n = nums.size();
      bool flag = false;
      for(int i =0;i<n;i++){
         if(nums[i]==1) {
             flag = true;
         }
         if(nums[i]<=0 || nums[i]>n){ //[1,n]
             nums[i] = 1;
         }
      }

      if(flag==false) return 1;
      for(int i = 0;i<nums.size();i++){
          int num = abs(nums[i]);
          int idx = num-1;
          if(nums[idx]<0) continue;
           nums[idx] =-1*nums[idx];
      }
      for(int i = 0;i<n;i++){
         if(nums[i]>0) return i+1;
      }
      return n+1;
    }
};
