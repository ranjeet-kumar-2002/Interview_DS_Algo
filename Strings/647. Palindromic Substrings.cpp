class Solution {
public:
   bool isPolimdrome(int i,int j,string s){
         while(i<j){
             if(s[i]==s[j]){
                 i++;
                 j--;
             }else return false;
         }
         return true;
    }
    int countSubstrings(string s) {
        int count = 0;
        for(int i =0;i<s.size();i++){
            for(int j = i;j<s.size();j++){
                if(isPolimdrome(i,j,s)) count++;
            }
        }
        return count;
    }
};
