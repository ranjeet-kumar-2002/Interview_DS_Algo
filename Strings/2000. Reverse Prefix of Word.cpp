
//2000. Reverse Prefix of Word
#include<iostream>
#include<string>
#include<cmath>
#include<climits>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        int j = 0;
        bool flag = false;
        for(int i = 0;i<word.size();i++){
             if(word[i]==ch){
                 j = i;
                 flag = true;
                 break;
             }
        }
        if(!flag) return word;
        int i = 0;
        while(i<=j){
             swap(word[i],word[j]);
             i++;
             j--;
        }
        return word;
    }
};

int main(){
     string s;
     getline(cin,s);
     char ch;cin>>ch;
     Solution obj;
     cout<<obj.reversePrefix(s,ch);
     return 0;
}

// word = "abcdefd", ch = "d"
// Output: "dcbaefd"
