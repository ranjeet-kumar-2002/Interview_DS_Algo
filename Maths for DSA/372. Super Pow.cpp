// if 'M' is prime - 1e9+7  then, aᵇ % M = (a ^ (b%(M-1)) ) % M
// if 'M' is not prime, lets say 1337
// then find its prime factors p1,p2,p3.... then use this formula to calculate phi = (p1-1)(p2-1)(p3-1)...
// Here prime factors are 7 ,191, therfore phi = 6*190 = 1140
// so final formula will be -
// aᵇ % M = (a ^ (b%(phi-1)) ) % M


Wrong Answer
55 / 57 testcases passed


class Solution {
public:
    int binExp(int a, int b, int m) {
        a %= m;
        int ans = 1;
        while (b > 0) {
            if (b & 1) {
                ans = (ans * 1LL * a) % m;
            }
            a = (a * 1LL * a) % m;
            b >>= 1;
        }
        return ans;
    }

    int superPow(int a, vector<int>& b) {
        int newb = 0;
        for (int val : b) {
            newb = (newb * 10 + val) % 1140;
        }
        return binExp(a, newb, 1337);
    }
};
