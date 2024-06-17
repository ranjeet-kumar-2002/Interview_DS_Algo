#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
#include<unordered_set>
#include <sstream>
using namespace std;
string find(string &word, unordered_set<string>&st){
         for(int l = 0;l<word.size();l++){
            string s = word.substr(0,l);
            if(st.find(s)!=0){
                return s;
            } 
         }
         return word;
    }
string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_set<string>st;
        for(auto &x:dictionary) st.insert(x);
        stringstream ss(sentence);
        string word;
        string ans;
        while(getline(ss,word,' ')){
             ans +=find(word,st)+" "; 
        }
       ans = ans.substr(0,ans.size()-1);
       return ans;
    }
int main(){
    int n;cin>>n;
    vector<string>dic(n);
    for(int i =0;i<n;i++){
        cin>>dic[i];
    }
     cin.ignore(); //Ignore the newline character left in the buffer
    string sentence;
    cout << "Enter the sentence: ";
    getline(cin, sentence);
    cout<<replaceWords(dic,sentence);
    return 0;
}

// Input: dictionary = ["cat","bat","rat"], sentence = "the cattle was rattled by the battery"
// Output: "the cat was rat by the bat"
