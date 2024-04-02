#include<iostream>
#include<queue>
#include<cmath>
#include<climits>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;
bool check(string &s,string &t){
     unordered_map<char,char>mp1;
     unordered_map<char,char>mp2;
     for(int i = 0;i<s.size();i++){
          if(mp1.find(s[i]) !=mp1.end() && mp1[s[i]] !=t[i] ||
          mp2.find(t[i]) !=mp2.end() && mp2[t[i]] !=s[i]) return false;
          else {
               mp1[s[i]] = t[i];
               mp2[t[i]] = s[i];
          }
     }
     return true;
}
int main() {
     string s,t;
     getline(cin,s);
     getline(cin,t);
     cout<<check(s,t);
     return 0;
}

// s ="badc" , t ="baba"    
// No two characters may map to the same character, but a character may map to itself.
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        for(int i = 0;i<s.size();i++){
            if(mp1.find(s[i]) !=mp1.end() && mp1[s[i]] != t[i] || mp2.find(t[i]) !=mp2.end() && mp2[t[i]] !=s[i]){
                 return false;
            }else {
                 mp1[s[i]]=t[i];
                 mp2[t[i]]=s[i];
            }
        }
        return true;
    }
};
