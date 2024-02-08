**************************************************************************************************
  https://leetcode.com/problems/check-if-the-sentence-is-pangram/
  
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if(n<26) return false;
        unordered_map<char,int>mp;
        for(auto &x:sentence){
            mp[x]++;
        }
      for(int i =97;i<=122;i++){
          char ch = char(i);  // a b c ............
          int freq = mp[ch];
          if(freq==0) return false;
      }
      return true;
    }
};

****************************************************************************************

class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n = sentence.size();
        if(n<26) return false;
       vector<int>fre(26,0);
       for(auto &x:sentence){
           int indx = x-'a';
           fre[indx]++;
       }

       for(int i =0;i<fre.size();i++){
           if(fre[i]==0) return false;
       }
       return true;
    }
};


*********************************************************************************************
class Solution {
public:
    bool checkIfPangram(string sentence) {
      vector<int>mp(26,0);
      for(auto &ch:sentence) mp[ch-'a']++;
      for(auto &x:mp){
          if(x==0) return false;
      }
      return true;
    }
};
