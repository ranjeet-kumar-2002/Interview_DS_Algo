class Solution {
public:
    vector<int>LPS(string s2){
        vector<int>lps(s2.size(),0);
        int pre = 0;int suff= 1;
        while(suff<s2.size()){
            if(s2[pre]==s2[suff]){
                lps[suff]=pre+1;
                pre++;suff++;
            }else{
                if(pre==0) {
                    lps[suff] =0;
                    suff++;
                }
                else {
                    pre = lps[pre-1];
                }
            }

        }
        return lps;
    }
    int strStr(string s1, string s2) {
        vector<int>lps = LPS(s2);
        int first = 0;int second = 0;
        while(first<s1.size() && second<s2.size()){
            if(s1[first]==s2[second]){
                first++;second++;
            }else{
                if(second==0) first++;
                else second = lps[second-1];
            }
        }
        if(second==s2.size()) return first-second;
        return -1;
    }
};
