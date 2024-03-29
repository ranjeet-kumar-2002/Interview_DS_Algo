class Solution {
public:
    int kthFactor(int n, int k) {
        for(int i = 1;i<=n;i++){
             if(n%i==0) k--;
             if(k==0) return i;
        }
        return -1;
    }
};
********************************************************************

1492. The kth Factor of n

class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int>ans;
        for(int i = 1;i<=sqrt(n);i++){
                if(n%i==0){
                     if(n/i==i) ans.push_back(i); // if perfect square 
                      else {
                           ans.push_back(i);
                           ans.push_back(n/i);
                      }
                }
             }
        sort(ans.begin(),ans.end());
        if(ans.size()<k) return -1;
        return ans[k-1];
        
    }
};

**************************************count ans sum of fators************************

    class Solution {
    public:
    int kthFactor(int n, int k) {
        int ct = 0;
        int sum = 0;
        for(int i = 1;i<=sqrt(n);i++){
                if(n%i==0){
                     if(n/i==i){
                          ct++;
                          sum +=i;
                     }
                      else {
                           sum +=i+n/i;
                           ct+=2;
                     }
                }
             }
        cout<<ct<<endl;
        cout<<sum<<endl;
    }
};

