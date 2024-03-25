287. Find the Duplicate Number
// // using map
// // using set
// // using sorting+indx+value
// // using nature number sum
// // using vector to check if it is visited or not if not the mark visited true corresponding that element 

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int ,int>mp;
        for(int i =0;i<nums.size();i++) mp[nums[i]]++;
        for(auto &m:mp){
            if(m.second>1) return m.first;
        }
        return 0;
    }
};


// /////////////////////////////////////////////////////////////////////////

// // when element of given nums are valid index
// // here arrays are modified

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
     for(int i =0;i<nums.size();i++){
        int indx = abs(nums[i]); // assume element as indx
        if(nums[indx]<0) return indx; // alredy visited that element
        nums[indx] =-1*nums[indx]; // marks as visited;
     }
     return -1;
    }
};
// using here and tortoise technique(slow and fast pointer) slow==fast -->cycle detectiom
// /////////////////////////////////////////////////////////////////////////
// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//          int n = nums.size();
//          for(int i =0;i<n;i++){
//              nums[nums[i]%n] = nums[nums[i]%n]+n;
//          }
//          for(int i =0;i<n;i++){
//              if(nums[i]/n>1) return i;
//          }
//          return 0;
//     }
// };
*****************************************************************************
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int slow = nums[0];
         int fast = nums[0];
         slow = nums[slow];
         fast = nums[nums[fast]];
         while(slow!=fast){
             slow = nums[slow];
             fast = nums[nums[fast]];
         }
          slow = nums[0];
           while(slow !=fast){
             slow = nums[slow];
             fast = nums[fast];
         } 
         return slow; //fast
    }
};
