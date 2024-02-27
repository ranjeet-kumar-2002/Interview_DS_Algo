//Large Exponentiation using Binary Multiplication if a is very large and M is very large
// a<=10^18 and m<=10^18

#include<bits/stdc++.h>
using namespace std;
const int M = 1e18+7;
int binMulti(long long a, long long b) {
    int ans = 0;
    while (b) {
        if (b & 1) ans = (ans + a) % M;
        a = ( a + a) % M;
        b >>= 1;
    }
    return ans;
}

int binExp1(long long a, long long b) {
    int ans = 1;
    while (b) {
        if (b & 1) ans = binMulti(ans, a);
        a = binMulti(a, a);
        b >>= 1;
    }
    return ans;
}
int main() {
    cout << binExp1(10, 18) << endl;
    return 0;
}
