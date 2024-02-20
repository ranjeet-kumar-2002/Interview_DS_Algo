class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n = nums.size();
       int sum = 0;
       int naturesum = n*(n+1)/2;
       for(int i =0;i<n;i++){
           sum +=nums[i];
       }
       return naturesum-sum;
    }
};
**************************************************************
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (nums[i] == i) continue; 
             else return i;
        }
        return n; // If no number is missing, return n
    }
};
**************************************************************8
class Solution {
    public int missingNumber(int[] nums) {
      int Xor = nums.size();
      for(int i = 0;i<nums.size();i++){
          Xor^=i;
          Xor^=nums[i];
      }
      return Xor;
    }
}

*************************java**************************************
    
class Solution {
    public int missingNumber(int[] nums) {
      int Xor = nums.length;
      for(int i = 0;i<nums.length;i++){
          Xor^=i;
          Xor^=nums[i];
      }
      return Xor;

    }
}
**************************************python*************************************
    class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n = len(nums)
        sumnature = n*(n+1)//2  # // is the floor division operator in Python 
                                # / is the float division operator
        numsum = sum(nums)
        return  sumnature-numsum
