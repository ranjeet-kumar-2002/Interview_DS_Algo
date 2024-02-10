
class Solution {
public:
    bool isPalindrome(int i,int j,string &s) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        if(s.size()==1) return s;
        int maxi = INT_MIN;
        int n = s.size();
        string ans;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (isPalindrome(i,j,s)) {
                    if (maxi <j - i + 1) {
                        maxi = j - i + 1;
                        ans = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return ans;
    }
};
