class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        if(s.size()==0) return 0;
        if(s.size()==1) return mp[s[0]];
        int ans = 0;
         char next;
        for(int i =0;i<s.size()-1;i++){
            char prev = s[i];
            next = s[i+1];
            int prevVal = mp[prev];
            int nextVal = mp[next];
            if(prevVal>=nextVal) ans = ans+prevVal;
            else ans = ans-prevVal;
        }
        return ans+mp[next];
    }
};
*********************************************************************************************
class Solution {
public:
    int mp(char ch){
        if(ch=='I') return 1;
        else if(ch=='V') return 5;
        else if(ch=='X') return 10;
        else if(ch=='L') return 50;
        else if(ch=='C') return 100;
        else if(ch=='D') return 500;
        else return 1000;
        
    }
    int romanToInt(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return mp(s[0]);
        int ans = 0;
         char next;
        for(int i =0;i<s.size()-1;i++){
            char prev = s[i];
            next = s[i+1];
            int prevVal = mp(prev);
            int nextVal = mp(next);
            if(prevVal>=nextVal) ans = ans+prevVal;
            else ans = ans-prevVal;
        }
        return ans+mp(next);
    }
};

*****************************************************************************************
class Solution {
public:
    int mp(char ch){
        if(ch=='I') return 1;
        else if(ch=='V') return 5;
        else if(ch=='X') return 10;
        else if(ch=='L') return 50;
        else if(ch=='C') return 100;
        else if(ch=='D') return 500;
        else return 1000;
        
    }
    int romanToInt(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return mp(s[0]);
        int ans = 0;
        int i = 0;
        while(i<s.size()-1){
            char prev = s[i];
            char next = s[i+1];
            int prevVal = mp(prev);
            int nextVal = mp(next);
            if(prevVal>=nextVal) ans = ans+prevVal;
            else ans = ans-prevVal;
            i++;
        }
        return ans+mp(s[i]);
    }
};
