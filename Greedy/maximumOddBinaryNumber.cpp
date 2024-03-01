class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       int onescount = 0;
       int zeroscount =0;
       for(int i =0;i<s.size();i++){
          if(s[i]=='1') onescount++;
          if(s[i]=='0') zeroscount++;
       }
        onescount--;
        string ans ="";
        while(onescount--) ans +='1';
        while(zeroscount--) ans+='0';
        ans +='1';
        return ans;
    }
};
