//TLE

class Solution {
public:
    bool isprime(int n){
        bool flag = true;
        for(int i =2;i*i<=n;i++){
            if(n%i==0){
                flag = false;
                break;
            }
        }
        return flag;
    }
    int countPrimes(int n) {
        int count = 0;
        for(int i = 2;i<n;i++){
            if(isprime(i)){
                if(i<n) count++;
            }
        }
        return count;
    }
};

************************************************************8
class Solution {
public:
    vector<bool>sieve(int n){
        vector<bool>isprime(n+1,true);
        isprime[0]=isprime[1]=false;
        for(int i = 2;i*i<=n;i++){
            if(isprime[i]){
               for(int j = i*i;j<n;j+=i){
                   isprime[j]=false;
               }
            }
        }
        return isprime;
    }
    int countPrimes(int n) {
        vector<bool>temp = sieve(n);
        int count = 0;
        for(int i = 2;i<n;i++){
            if(temp[i]){
                if(temp[i]<n) count++;
            }
        }
        return count;
    }
};
