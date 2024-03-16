similar 560 ,930,1074,525
***********************************************************************
class Solution(object):
    def findMaxLength(self, nums):
        n = len(nums)
        mp = {0: -1}  # {sum: index}
        ans = 0
        count = 0
        for i in range(n):
            if nums[i] == 0:
                count -= 1
            else:
                count += 1
            if count in mp:
                ans = max(ans, i - mp[count])
            else:
                mp[count] = i
        return ans
          
******************************************************************************************
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        mp[0]=-1;
        int count =0;
        int maxi =0;
        for(int i =0;i<n;i++){
             if(nums[i]==1) count++;
             else count--;
             if(mp.find(count)==mp.end()){  // not present
                  mp[count]=i;
             }
             else{
                   maxi = max(maxi,i-mp[count]);
             }
        }

        return maxi;
    }
};
