class Solution {
public:
     typedef pair<int,string>p;
    string sortSentence(string s) {
       stringstream str(s);
       string token;
        priority_queue<p,vector<p>,greater<p>>pq;
       while(getline(str,token,' ')){
        int digit = token.back();
        pq.push({digit,token.substr(0,token.size()-1)});
       }

       string ans = "";
       while(!pq.empty()){
           auto x = pq.top();pq.pop();
           string temp = x.second;
           ans +=temp+" ";
       }
       return ans.substr(0,ans.size()-1);
    }

};
