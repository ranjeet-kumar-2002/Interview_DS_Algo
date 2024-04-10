//950. Reveal Cards In Increasing Order
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        vector<int>ans(n);
        queue<int>q;
        for(int i =0;i<n;i++){
             q.push(i);
        }
        for(int i =0;i<n;i++){
             int indx = q.front();q.pop();
             q.push(q.front());q.pop();
             ans[indx] = deck[i];
        }
        return ans;
    }
};

**************************************************************************
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        sort(deck.begin(),deck.end());
        vector<int>ans(n);
        queue<int>q;
        for(int i =0;i<n;i++){
             q.push(i);
        }
        for(int i =0;i<n;i++){
             int indx = q.front();q.pop();
             q.push(q.front());q.pop();
             ans[indx] = deck[i];
        }
        return ans;
    }
    int main(){
        int n;cin>>n;
        vector<int>deck(n);
        for(int i =0;i<n;i++){
             cin>>deck[i];
        }
        vector<int> ans = deckRevealedIncreasing(deck);
        for(int i =0;i<ans.size();i++){
             cout<<ans[i]<<" ";
        }
        return 0;
    }
    
//     7
// 17 13 11 2 3 5 7
// 2 13 3 11 5 17 7 
