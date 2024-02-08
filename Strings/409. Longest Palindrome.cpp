  // travesal on map
// https://leetcode.com/problems/longest-palindrome/description/
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> myMap = {
        {"apple", 5},
        {"banana", 3},
        {"orange", 8},
        {"grape", 10}
    };

    // Using iterators to traverse the unordered map
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Key: " << it->first << ", Value: " << it->second << std::endl;
    }

    return 0;
}
          another method for travesal on map

#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> myMap = {
        {"apple", 5},
        {"banana", 3},
        {"orange", 8},
        {"grape", 10}
    };

    // Using range-based loop to traverse the unordered map
    for (const auto& pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}

class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        int count=0;
        unordered_map<char , int>mp;
        for(int i =0;i<s.size();i++){
             mp[s[i]]++;
        }
      int oddcount =0;
      for (auto it = mp.begin(); it != mp.end(); ++it) {
          if(it->second%2 !=0) {
             oddcount++;
             count +=it->second-1;
          }
          else count +=it->second;
               
    }
    if(oddcount>0) count++;
    return count;

    }
};
