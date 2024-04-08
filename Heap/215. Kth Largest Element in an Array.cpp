using sorting algo
using min heap
using the max heap
quich select
***********************************************************************************************
215. Kth Largest Element in an Array
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto &x:nums){
            pq.push(x);
        }
        int ans = 0;
        while(k--){
           ans = pq.top();pq.pop();
        }
        return ans;
    }
};
*******************************************************************************

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i =0;i<nums.size();i++){
            pq.push(nums[i]);
            if(pq.size()>k){
                pq.pop();
            }
        }
        return pq.top();
    }
};

***********************************************************************************
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.rbegin(),nums.rend());
       return nums[k-1];
    }
};
******************************************************************************************
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end(),greater<int>());
       return nums[k-1];
    }
};

*************************************************************************************************
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       priority_queue<int,vector<int>,greater<int>>pq;
       int n = nums.size();
       for(int i = 0;i<k;i++){
          pq.push(nums[i]);
       }
       for(int i = k;i<n;i++){
         if(pq.top()<nums[i]){
            pq.pop();pq.push(nums[i]);
         }
       }

       return pq.top();
    }
};
