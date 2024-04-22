            //BFS//
// word ladder 
// find the jumping numbers less than x (gfg)
// open the lock

// pattern in question 
//1 asks about the numbers or word
//2.each digit or character cab be changed 
//3.you have to reach a target word/number in minimum moves
//4. list of numbers / words are allowed or denied


// Input: deadends = ["8888"], target = "0009"
// Output: 1
// Explanation: We can turn the last wheel in reverse to move from "0000" -> "0009".

#include<iostream>
#include<string>
#include<queue>
#include<vector>
#include<unordered_set>
using namespace std;
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>st(deadends.begin(),deadends.end());
         if(st.count("0000")) return -1;
        queue<string>q;
        q.push("0000");
        st.insert("0000");
        int level = 0;
        while(!q.empty()){
             int n = q.size();
             for(int i =0;i<n;i++){
                string s = q.front();q.pop();
                if(s==target) return level;
                for(int j = 0;j<4;j++){
                    char ch = s[j];
                    char dec = ch=='0' ? '9' : ch-1;
                    char inc = ch=='9' ? '0' : ch+1;
                    s[j] = dec;
                    if(st.find(s)==st.end()){
                         q.push(s);
                         st.insert(s);
                    }
                    s[j] = inc;
                    if(st.find(s)==st.end()){
                         q.push(s);
                         st.insert(s);
                    }
                    s[j] = ch;
                }
             }
             level++;
        }
        return -1;
    }
int main(){
     int n;cin>>n;
     vector<string>deadends(n);
     for(int i =0;i<n;i++){
          cin>>deadends[i];
     }
      string target;cin>>target;
     cout<<openLock(deadends,target);
     return 0;
}
