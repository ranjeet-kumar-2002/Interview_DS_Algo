class Solution {
public:
    int f(string& s, int k, char prevIdx, int idx, vector<vector<int>>& memo) {
        if (idx >= s.size()) return 0;
        
        if (memo[idx][prevIdx - 'a'] != -1) // Check if result is already computed
            return memo[idx][prevIdx - 'a'];
        
        int take = 0;
        if (prevIdx == '{' || abs(s[idx] - prevIdx) <= k) {
            take = 1 + f(s, k, s[idx], idx + 1, memo);
        }
        
        int skip = f(s, k, prevIdx, idx + 1, memo);
        
        // Store the result in the memoization table
        memo[idx][prevIdx - 'a'] = max(take, skip);
        
        return memo[idx][prevIdx - 'a'];
    }
    
    int longestIdealString(string s, int k) {
        // Initialize memoization table with -1
        vector<vector<int>> memo(s.size()+1, vector<int>(27, -1));
        return f(s, k, '{', 0, memo);
    }
};
