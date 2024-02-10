// using pq
// using simple itaration and sorting
************************************************************************************
class Solution {
public:
    string sortVowels(string s) {
        priority_queue<char,vector<char>,greater<char>>pq;
        for(int i =0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
             s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               pq.push(s[i]);
           }
        }

        for(int i =0;i<s.size();i++){
             if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ||
              s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               s[i] = pq.top(); pq.pop();
           }
        }
        return s;

    }
};
******************************************************************************************
// using pq
// using simple itaration and sorting

class Solution {
public:
    bool isVowel(char ch){
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' ||
             ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                 return true;
           }
           return false;
    }
    string sortVowels(string s) {
     string vowel ="";
     string ans = "";
     for(int i = 0;i<s.size();i++){
         if(isVowel(s[i])){
             vowel+=s[i];
         }
     }

     sort(vowel.begin(),vowel.end());
     int j = 0;
     for(int i =0;i<s.size();i++){
         if(isVowel(s[i])){
             ans +=vowel[j];
             j++;
         }else {
             ans +=s[i];
         }
     }
     return ans;
    }
};


*************************************************************************************************

//The vowels must be sorted in the nondecreasing order of their ASCII
class Solution {
public:
    string sortVowels(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for(int i =0;i<s.size();i++){
            char ch = s[i];
            if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                lower[ch-'a']++;
                s[i] = '#';
            }
            if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
                upper[ch-'A']++;
                s[i] ='#';
            }
        }
        string vowel = "";
        for(int i = 0;i<26;i++){
            int freq = upper[i];
            char ch = 'A'+i;
            while(freq--){
                vowel +=ch;
            }
        }

         for(int i = 0;i<26;i++){
            int freq = lower[i];
            char ch = 'a'+i;
            while(freq--){
                vowel +=ch;
            }
        }
        string ans = "";
        int j = 0;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='#'){
                ans +=vowel[j];
                j++;
            }else {
                ans +=s[i];
            }
        }
        return ans;

    }
};







