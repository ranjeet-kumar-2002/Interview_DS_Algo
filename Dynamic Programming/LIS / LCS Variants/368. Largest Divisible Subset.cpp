#include <vector>
#include <algorithm>

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return {};

        sort(nums.begin(), nums.end());

        vector<int> dp(n, 1); // dp[i] stores the length of the largest divisible subset ending at index i
        vector<int> prev(n, -1); // prev[i] stores the index of the previous element in the largest divisible subset ending at index i
        int maxLen = 1, maxIdx = 0;

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i]) {
                    dp[i] = dp[j] + 1;
                    prev[i] = j;
                    if (dp[i] > maxLen) {
                        maxLen = dp[i];
                        maxIdx = i;
                    }
                }
            }
        }

        vector<int> result;
        while (maxIdx != -1) {
            result.push_back(nums[maxIdx]);
            maxIdx = prev[maxIdx];
        }

        return result;
    }
};


