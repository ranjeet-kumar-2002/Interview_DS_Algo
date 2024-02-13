class Solution {
public:
    bool isPolimdrome(string &s){
        string temp = s;
        reverse(temp.begin(),temp.end());
        return temp == s;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i = 0;i<words.size();i++){
            if(isPolimdrome(words[i])) return words[i];
        }
        return "";
    }
};
