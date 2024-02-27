**************************************************************
long long power(long long a, long long b) {
    if (b == 0) {
        return 1; // Any number to the power of 0 is 1
    } else if (b > 0) {
        return a * power(a, b - 1); // Recursive call for positive exponent
    } else {
        return 1 / power(a, -b); // Recursive call for negative exponent
    }
}
***********************************************************************
class Solution {
public:
    int m = 1000000000 + 7; // 1e9+7
    long long power(long long N, int R) {
        if (R == 0) return 1;
        long long temp = power(N, R / 2) % m;
        long long result = (temp%m * temp%m) % m;
        if (R % 2 == 0) return result%m;
        else return (result%m * N%m) % m;
    }
};
**********************************************************
class Solution {
public:
    int m = 1000000000 + 7; // 1e9+7
    long long power(long long N, int R) {
        if (R == 0) return 1;
        long long temp = power(N, R / 2) % m;
        long long result = (temp * temp) % m;
        if (R % 2 == 0) return result;
        else return (result * N) % m;
    }
};
*************************************************************8
Power Of Numbers
class Solution {
public:
    int m = 1000000000 + 7; // 1e9+7
    long long power(int N, int R) {
        if (R == 0) return 1;
        long long temp = power(N, R / 2) % m;
        if (R % 2 == 0) return (temp%m * temp%m) % m;
        else return ((N % m) * (temp%m * temp%m) % m) % m;
    }
};

***********************************************************very efficent method************************
class Solution {
public:
    int m = 1000000000 + 7; // 1e9+7
    long long power(int a, int b) {
        long long res = 1;
        while(b){
            if(b & 1){
                res = (res * (long long)a) % m;
            }
            a = ((long long)a * a) % m;
            b = b >> 1;
        }
        return res;
    }
};

****************************************************************

class Solution {
public:
    int m = 1000000000 + 7; // 1e9+7
    long long power(long long a, long long b) {
        long long res = 1;
        while(b){
            if(b & 1){
                res = (res *a) % m;
            }
            a = (a * a) % m;
            b = b >> 1;
        }
        return res;
    }
};
