//Maximum Occuring Character

class Solution
{
    public:
    char getMaxOccuringChar(string str) {
    map<char,int>mp;
    for(int i =0;i<str.size();i++) mp[str[i]]++;
     int maxi = INT_MIN;
     char ans; 
     for(auto &x:mp){
         if(x.second>maxi){
             maxi = x.second;
             ans = x.first;
         }
     }
     return ans;
    }
};
