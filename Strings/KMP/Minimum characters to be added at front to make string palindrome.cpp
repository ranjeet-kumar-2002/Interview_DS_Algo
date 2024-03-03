
using namespace std;
class Solution {
public:
    int minChar(string str){
      int n =str.size();
      string rev = string(str.rbegin(),str.rend());
      str +='$';
      str +=rev;
      vector<int>lps(str.size(),0);
      int pre = 0;
      int suff = 1;
      while(suff<str.size()){
          if(str[pre]==str[suff]){
              lps[suff] =pre+1;
              pre++;suff++;
          }else{
              if(pre==0){
                  lps[suff] = 0;
                  suff++;
              }else{
                  pre = lps[pre-1];
              }
          }
      }
      int ans = n-lps[str.size()-1];
      return ans; // Added return statement
    }
};
