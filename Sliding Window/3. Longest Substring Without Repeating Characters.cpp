
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        int len =0;
        vector<int>count(250,0); // boolen type count
        //consists of English letters, digits, symbols and spaces.
        while(j<n){
            while(count[s[j]]){
                count[s[i]]=0;
                i++;
            }
            count[s[j]]=1;
            len =max(len,j-i+1);
            j++;
        }
        return len;
    }
};
