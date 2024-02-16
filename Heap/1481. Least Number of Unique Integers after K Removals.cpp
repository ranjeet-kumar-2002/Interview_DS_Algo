class Solution {
public:
    priority_queue<int>pq;
    typedef pair<int,int>p;
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(int i = 0; i<arr.size();i++){
            mp[arr[i]]++;
        }
      priority_queue<p,vector<p>,greater<p>>pq;
      for(auto &x:mp){
          pq.push({x.second,x.first});
      }
      while(k--){
          auto p = pq.top() ;pq.pop();
          int freq = p.first;
          int element = p.second;
          freq = freq-1;
          if(freq>0) pq.push({freq,element});
      }
      return pq.size();
    }
};
