class Solution {
public:
    bool isPowerOfTwo(int n) {
        int count = 0;
        if(n<0) return false;
        while(n){
            count++;
           n =  n & (n-1);
        }
    return count ==1 ? true:false;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
    if(n<=0) return false;
    int count = __builtin_popcount(n);
    return count ==1 ? true:false;
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
    if(n==0) return false;
    if(n==1) return true;
     while(n%2==0){
         n = n/2;
     }
     return n==1;
    }
};


class Solution {
public:
    bool isPowerOfTwo(int n) {
    //n = 4 ->100
    //n-1 =3 ->011
    if(n<=0) return false;
    return ((n & (n-1)) == 0);
    }
};

class Solution {
public:
    bool isPowerOfTwo(int n) {
    //n = 4 ->100
    //n-1 =3 ->011
    if(n<=0) return false;
    return ((n & (n-1)) == 0);
    }
};
