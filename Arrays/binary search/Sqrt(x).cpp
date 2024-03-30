#include<iostream>
#include<vector>
#include<queue>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
int sqrt(int n){
    if(n<2) return n;
     int l = 1;
     int r = n;
     int target = n;
     int ans = 0;
     while(l<=r){
          int mid = l+(r-l)/2;
          if(mid*mid==target) {
               ans = mid; break;
          }else if(mid*mid<target){
               ans = mid;
               l = mid+1;
          }else r = mid-1;
     }
     return ans;
}
int main(){
     int n;cin>>n;
     cout<<sqrt(n);
     return 0;
}
******************************************************************************


class Solution {
public:
    int mySqrt(int x) {
        int l = 1;int r = x;
        int target = x;
        long long ans = 0;
        while(l<=r){
             long long mid = l+(r-l)/2;
             if(mid*mid==target){
                 ans = mid;break;
             }
            else if(mid*mid<target){
                 ans = mid;
                 l = mid+1;
             }else r = mid-1;
        }
        return ans;
    }
};
*************************************************************************************
class Solution {
public:
    int mySqrt(int x) {
        if(x<2) return x;
        int l = 1;int r = x;
        int target = x;
        int ans = 0;
        while(l<=r){
             int mid = l+(r-l)/2;
             if(mid==target/mid){
                 ans = mid;break;
             }
            else if(mid<target/mid){
                 ans = mid;
                 l = mid+1;
             }else r = mid-1;
        }
        return ans;
    }
};
