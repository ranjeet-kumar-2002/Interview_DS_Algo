
// 846. Hand of Straights
// we need to use ordered_map 
// need to store freq 
// key::value 
// 1 -> 1
// 2 -> 2
// 3 -> 2
// 4 -> 1
// 6 - > 1
// 7 - > 1
// 8 - > 1

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize) return false;
        map<int,int>mp;
        for(int &x:hand) mp[x]++;
        while(!mp.empty()){
             int curr = mp.begin()->first; // second == freq
             for(int i = 0;i<groupSize;i++){
                 if(mp[curr+i] == 0) return false;
                 else {
                      mp[curr+i]--;
                      if(mp[curr+i]<=0) mp.erase(curr+i);
                 }
             }

        }
        return true;
    }
};
***************************************************************************************

#include<iostream>
#include<vector>
#include<map>
using namespace std;
// we need to use ordered_map 
// need to store freq 
// key::value 
// 1 -> 1
// 2 -> 2
// 3 -> 2
// 4 -> 1
// 6 - > 1
// 7 - > 1
// 8 - > 1
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize) return false;
        map<int,int>mp;
        for(int &x:hand) mp[x]++;
        while(!mp.empty()){
             int curr = mp.begin()->first; // second == freq
             for(int i = 0;i<groupSize;i++){
                 if(mp[curr+i] == 0) return false;
                 else {
                      mp[curr+i]--;
                      if(mp[curr+i]<=0) mp.erase(curr+i);
                 }
             }

        }
        return true;
    }
int main(){
     int n;cin>>n;
     vector<int>hand(n);
     for(int i =0;i<n;i++) cin>>hand[i];
     cout<<"group size";
     int s;cin>>s;
     cout<<isNStraightHand(hand,s);
     return 0;
}

//hand = [1,2,3,6,2,3,4,7,8], groupSize = 3

