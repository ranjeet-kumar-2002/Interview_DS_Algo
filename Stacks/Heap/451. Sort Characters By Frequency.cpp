class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(int i =0;i<s.size();i++){
            mp[s[i]]++;
        }

        priority_queue<pair<int,char>>pq;
        for(auto &x:mp){
            pq.push({x.second,x.first});
        }
        string ans = "";
        while(!pq.empty()){
            auto x = pq.top();pq.pop();
            int freq = x.first;
            char ch = x.second;
            while(freq--){
                ans +=ch;
            }
        }
        return ans;
    }
};
