349. Intersection of Two Arrays
// using set O(n)
// scO(n)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        unordered_set<int>st1;
        vector<int>ans;
        for(auto &x:nums1) st.insert(x);
        for(auto &x:nums2){
            if(st.find(x) !=st.end()){
               st1.insert(x);
            }
        }
       for(auto &x:st1) ans.push_back(x);
       return  ans;
    }
};

********************************************************
// using set O(n) 
// scO(n)
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(begin(nums1),end(nums1));
        vector<int>ans;
        for(auto &x:nums2){
            if(st.find(x) !=st.end()){
               ans.push_back(x);
               st.erase(x);
            }
        }
       return  ans;
    }
};


***************************************************
// using binary search O(nlong)
// scO(n)
class Solution {
public:
    bool binary(vector<int>& nums1,int target){
        int i = 0;
        int j = nums1.size()-1;
        while(i<=j){
            int mid = i+(j-i)/2;
            if(nums1[mid]==target){
                return true;
            }else if(nums1[mid]>target) {
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      sort(nums1.begin(),nums1.end());
      unordered_set<int>st;
      for(int i =0;i<nums2.size();i++){
          if(binary(nums1,nums2[i])){
             st.insert(nums2[i]);
          }
      }
       vector<int>ans;
      for(auto&x:st) ans.push_back(x);
      return ans;
    }
};

****************************************************
//using two pointer approach
// O(nlogn) or O(mlonm)
    
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      int m = nums1.size();
      int n = nums2.size();
      sort(nums1.begin(),nums1.end());
      sort(nums2.begin(),nums2.end());
      int i = 0;
      int j = 0;
      vector<int>ans;
      while(i<m && j<n){
          if(nums1[i]==nums2[j]){
              ans.push_back(nums1[i]);
              while(i<m-1 && nums1[i]==nums1[i+1]) i++;
              while(j<n-1 && nums2[j]==nums2[j+1]) j++;
              i++;
              j++;
          }else if(nums1[i]<nums2[j]) i++;
          else j++;
      }
      return ans;
    }
};
