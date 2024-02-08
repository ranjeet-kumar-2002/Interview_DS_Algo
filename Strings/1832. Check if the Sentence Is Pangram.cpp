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
*******************************************************************************************************


class Solution {
public:
    bool checkIfPangram(string sentence) {
      vector<int>mp(26);
      for(auto &ch:sentence) mp[ch-'a']++;
      for(auto &x:mp){
          if(x==0) return false;
      }
      return true;
    }
};

**********************************************************************************************************

  
class Solution {
public:
    bool checkIfPangram(string sentence) {
      vector<int>mp(26,false);  //O(26)
      for(auto &ch:sentence) mp[ch-'a']=true;  //O(n)
      for(auto &x:mp){
          if(x==false) return false;
      }
      return true;
    }
};

********************************************************************************************


class Solution {
public:
    int longestPalindrome(string s) {
       vector<int>lower(26,0),upper(26,0);
       for(int i =0;i<s.size();i++){
           if(s[i]>='a'){  // lower
            lower[s[i]-'a']++;
           }else{ // upper
            upper[s[i]-'A']++;
           }
       }
       int count = 0;
       int oddcount = 0;
       for(int i =0;i<26;i++){
           if(lower[i]%2!=0){
               oddcount++;
               count+=lower[i]-1;
           }else{
               count +=lower[i];
           }
       }
       for(int i =0;i<26;i++){
           if(upper[i]%2!=0){
               oddcount++;
               count +=upper[i]-1;
           }else {
               count +=upper[i];
           }
       }
       if(oddcount>0) count++;
       return count;
    }
};

