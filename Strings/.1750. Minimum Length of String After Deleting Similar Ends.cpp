//1750. Minimum Length of String After Deleting Similar Ends
class Solution {
public:
    int minimumLength(string s) {
        if(s.size()==1) return 1; // "c"
        bool flag = false;  //"bbbbbbbbbbbbbbbbbbbbbbb";
        for(int i = 0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                flag = true;
                 break;
            } 
        }
        if(flag==false) return 0;
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]==s[j]){
                while(s[i]==s[i+1]) i++;
                i++;
                while(s[j]==s[j-1]) j--;
                j--;
            }else break;
        }
        return j-i+1<0?0:j-i+1;
    }
};
