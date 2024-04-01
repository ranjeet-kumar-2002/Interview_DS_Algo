#include<iostream>
#include<queue>
#include<cmath>
#include<climits>
#include<algorithm>
#include<unordered_map>
#include<unordered_set>
#include<string>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  int i = s.size()-1;
  while(s[i] ==' ') i--;
  int count = 0;
  while(s[i] !=' '){
      count++;
      i--;
      if(i<0) break;
  }
  cout<<count<<endl;
}


58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size()-1;
        while(s[i]==' '){
             i--;
        }
        int count = 0;
        while(s[i] !=' '){
             count++;
             i--;
             if(i<0) break;
        }
        return count;
    }
};
**********************************************************

class Solution {
public:
    int lengthOfLastWord(string s) {
       int indx = s.find_last_not_of(' ')+1;
       s.erase(indx);

       int last_space_ind = s.find_last_of(' ');
       return s.size()-last_space_ind-1;
    }
};


//Approach-2 (Using library functions) - Not good for interviews
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    int lengthOfLastWord(string s) {
        
        //s.find_last_not_of(' ') : This function searches for the last character in the string s that is not equal to the space character ' '. 
                                    //It returns the index of the last non-space character found, or string::npos if no such character is found.
        //s.erase(pos)            : This function removes characters from the string s, starting from the position pos specified as an argument.
                                    //It removes characters from pos until the end of the string.
        
        s.erase(s.find_last_not_of(' ') + 1); //Removes the trailing spaces
        
        // Find the last space character
        int lastSpace = s.find_last_of(' ');

        // Calculate the length of the last word
        return lastSpace == string::npos ? s.length() : s.length() - lastSpace - 1;
        
    }
};


