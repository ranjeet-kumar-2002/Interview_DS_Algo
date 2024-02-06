// Step1 we need to make one map<string,vector<string>>mp;
// then we need to store the every string and check the conditons
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<string>>ans;
     map<string,vector<string>>mp;
     for(auto &str:strs){
         string s = str;
         sort(s.begin(),s.end());
         if(mp.find(s)==mp.end()){ // not present
             vector<string>v;
             v.push_back(str);
             mp[s] = v;
         }else{  
             mp[s].push_back(str);
         }
     }
     for(auto &s:mp){
         ans.push_back(s.second);
     }
     return ans;
    }
};
