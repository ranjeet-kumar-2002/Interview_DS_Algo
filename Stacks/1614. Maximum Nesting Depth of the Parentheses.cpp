1614. Maximum Nesting Depth of the Parentheses

#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<climits>
#include<queue>
#include<stack>
using namespace std;
    int maxDepth(string s) {
        stack<int>st;
        int ans = 0;
        for(int i = 0;i<s.size();i++){
             if(s[i]=='('){
                st.push(s[i]);
                if(st.size()>ans) ans = st.size();
             }
             if(s[i]==')'){
                  st.pop();
             }
        }
        return ans;
    }
    
    int main(){
         string s;
         getline(cin,s);
         cout<<maxDepth(s);
         return 0;
    }

**************************************************************************************
class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int ans = 0;
        for(int i = 0;i<s.size();i++){
             if(s[i]=='('){
                st.push(s[i]);
                if(st.size()>ans) ans = st.size();
             }
             if(s[i]==')'){
                  st.pop();
             }
        }
        return ans;
    }
};
