
/////////////////////////1704. Determine if String Halves Are Alike///////////////////////////

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        string s1 = s.substr(0,n/2);
        string s2 = s.substr(n/2,n);
        int vowelCount1 = 0;
        int vowelCount2 = 0;
        for(int i =0;i<s1.size();i++){
            char ch = s1[i];
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||ch== 'O'|| ch=='U') vowelCount1++;
        }
          for(int i =0;i<s2.size();i++){
            char ch = s2[i];
            if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||ch== 'O'|| ch=='U') vowelCount2++;
        }
        return vowelCount1==vowelCount2;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    bool isVowel(char ch){ if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'||ch== 'O'|| ch=='U') return true;
    return false;
    }
    bool halvesAreAlike(string s) {
        int n = s.size();
        int i = 0;
        int j = n/2;
        int vowelCount1 = 0;
        int vowelCount2 = 0;
        while(i<n/2 && j<n){
            if(isVowel(s[i]))vowelCount1++;
            if(isVowel(s[j]))vowelCount2++;
            i++;
            j++;
        }
        return vowelCount1==vowelCount2;
    }
};

/////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.size();
        int i = 0;
        int j = n/2;
        unordered_set<char>st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        int vowelCount1 = 0;
        int vowelCount2 = 0;
        while(i<n/2 && j<n){
            if(st.find(s[i]) !=st.end())vowelCount1++;
            if(st.find(s[j]) !=st.end())vowelCount2++;
            i++;
            j++;
        }
        return vowelCount1==vowelCount2;
    }
};

