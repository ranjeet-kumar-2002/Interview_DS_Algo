

class Solution {
public:
    string sortSentence(string s) {
      vector<string>mp(10);
      string temp ="";
      int count = 0;
      int indx = 0;
      while(indx<s.size()){
          if(s[indx]==' '){
                 int digit = temp[temp.size()-1]-'0';
                 temp.pop_back();
                 mp[digit] = temp;
                 temp.clear();
                 count++;
          }else {
              temp +=s[indx];
          }
          indx++;
      }
                int digit = temp[temp.size()-1]-'0';
                 temp.pop_back();
                 mp[digit] = temp;
                 temp.clear();
                 count++;
       string ans="";
      for(int i =0;i<=count;i++){
          ans +=mp[i]+" ";
      }

      return ans.substr(1,ans.size()-2);
    }
};
