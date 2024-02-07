class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(int i =0;i<s.size();i++){
            if(s[i]=='#'){
                if(st1.size()>0) st1.pop();
            }
            else st1.push(s[i]);
        }

            for(int i =0;i<t.size();i++){
            if(t[i]=='#'){
                if(st2.size()>0) st2.pop();
            }
           else st2.push(t[i]);
        }
       return st1==st2;
    }
};
