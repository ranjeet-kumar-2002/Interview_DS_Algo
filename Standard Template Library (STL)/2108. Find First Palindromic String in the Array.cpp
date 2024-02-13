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

//Approach-1 (creating a reversed string)
//T.C : O(m*n) - m = number of words, n = max length length of words
//S.C : O(n) - Creating a reversed string
class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string &word : words) {
            if(word == string(rbegin(word), rend(word))) {
                return word;
            }
        }
        
        return "";
        
    }
};
