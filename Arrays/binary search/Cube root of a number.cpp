//Cube root of a number
class Solution {
public:
    int cubeRoot(int N) {
        if (N == 1) return 1;
        int l = 1;
        int r = N;
        int ans = 0;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if(mid*mid*mid == N) return N;
            else if (mid <=N / mid / mid) {  // optional && mid * mid * mid <=N
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return ans;
    }
};
***********************************************************************************
class Solution {
public:
    int cubeRoot(int N) {
      return cbrt(N);
    }
};
