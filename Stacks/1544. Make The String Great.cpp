//1544. Make The String Great
class Solution {
public:
    string makeGood(string s) {
        if(s.size()==0) return "";
        if(s.size()==1) return s;
        stack<char>st;
        for(auto &ch:s){
             if(!st.empty() && abs(st.top()-ch)==32) st.pop();
             else st.push(ch);
        }

        string ans = "";
        while(!st.empty()){
             ans +=st.top();st.pop();
        }
        if(ans.size()==0) return "";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};


#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<climits>
#include<cmath>
#include<unordered_set>
#include<unordered_map>
#include<stack>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stack<char>st;
    for(auto &ch:s){
         if(!st.empty() && abs(st.top()-ch)==32) st.pop();
         else st.push(ch);
    }
    string ans = "";
    while(!st.empty()){
         ans +=st.top();st.pop();
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    return 0;
}
