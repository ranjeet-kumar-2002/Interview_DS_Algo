2971. Find Polygon With the Largest Perimeter

class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
       int n = nums.size();
       sort(nums.begin(),nums.end());
       long long sum = 0;
       long long perimeter = 0;
       for(int i = 0;i<n;i++){
           if(nums[i]<sum) perimeter = nums[i]+sum;
           sum = sum+nums[i];
       }
       return perimeter == 0 ? -1 : perimeter;
    }
};
