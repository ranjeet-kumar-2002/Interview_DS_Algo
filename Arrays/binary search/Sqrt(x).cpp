// class Solution {
// public:
//     int mySqrt(int x) {
//         int l = 1;int r = x;
//         int target = x;
//         long long ans = 0;
//         while(l<=r){
//              long long mid = l+(r-l)/2;
//              if(mid*mid==target){
//                  ans = mid;break;
//              }
//             else if(mid*mid<target){
//                  ans = mid;
//                  l = mid+1;
//              }else r = mid-1;
//         }
//         return ans;
//     }
// };

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
