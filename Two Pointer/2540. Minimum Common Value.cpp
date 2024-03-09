Approach-2 (Using set)
T.C : O(n)
S.C : O(n)

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int>st;
      for(auto &x:nums1) st.insert(x);
      for(int i =0;i<nums2.size();i++){
          if(st.find(nums2[i])!=st.end()) return nums2[i];
      }
      return -1;
    }
};

************************************************************************
//Approach-2 (Using Binary Search)
//T.C : O(mlogn)
//S.C : O(1)
class Solution {
public:
    bool binarySearch(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
        while(l <= r) {
            int mid = l + (r-l)/2;
            if(nums[mid] == target) return true;
            else if(nums[mid] < target) l = mid+1;
            else  r = mid-1;
        }
        return false;
    }
    
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        for(int i =0;i<nums1.size();i++){
             if(binarySearch(nums2, nums1[i]))
                return nums1[i];
        }
        
        return -1;
    }
};

***************************************************************************
//Approach-3 (Using two pointer )
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int i = 0;
        int j = 0;
        while(i<m && j<n){
            if(nums1[i]==nums2[j]) {
                return nums1[i]; // nums2[j]
            }
            else if(nums1[i]<nums2[j]) {  // beacuse this sorted 
                 i++;
            }else{
                j++;
            }
        }
        return -1;
    }
};

