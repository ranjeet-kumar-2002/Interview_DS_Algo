class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>mp(26,0);
        for(int i =0;i<s.size();i++){
            mp[s[i]-'a']++;
        }
        string ans = "";
        for(int i=0;i<order.size();i++){
            while(mp[order[i]-'a']){
                ans+=order[i];
                mp[order[i]-'a']--;
            }
        }
        for(int i = 0;i<mp.size();i++){
             while(mp[i] != 0){
                ans+= (i+'a');
                mp[i]--;
             }
        }
        return ans;
    }
};

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(int i =0;i<s.size();i++){
            mp[s[i]]++;
        }
        string ans = "";
        for(int i =0;i<order.size();i++){
            while(mp[order[i]]){
                ans+=order[i];
                mp[order[i]]--;
            }
        }
        for(auto &x:mp){
        //    if(mp[x.first]>0){
           while(x.second>0){
              ans +=x.first;
              mp[x.first]--;
           }
        }
        return ans;
    }
};
