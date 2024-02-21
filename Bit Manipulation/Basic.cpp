//************************************** XOR Properties****************************////////////////////////

// 1^0=1
//1^1=0
//0^1=1
//0^0=0

// A^0=A
// A^A==0
//A^B==B^A
// A+B=A^B+2*(A&B)

//************************************** XOR Properties*********************************************////

//Q1///////////////////////// even or odd using bit//////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    if(n&1==1) cout<<"odd"<<endl;
    else cout<<"even"<<endl;
}

///////////////////////////Q2 you are given two numbers a and b convert a into b how many bitwise OR operations are required

#include<bits/stdc++.h>
using namespace std;
int main(){
   int a = 2;
   int b = 3;
   int count = 0;
   for(int i =1;i<=b;i++){
    if(a|i==b) count++;
   }
   cout<<count;
}

/// Q3////////////////////// Find the smallest number greater than ‘n’ with exactly 1 bit////////////////////// 
// different in binary form.


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n; cin>>n;
  cout<<(n|n+1);
   
}



//Q4///////////////////////// ////////// Check the ith bit is set or not | Bit Manipulation


#include<bits/stdc++.h>
using namespace std;
int main(){
  int i = 2; // second bit we need to check
  int n = 11;
  int temp = 1<<(i-1);
   if(temp&n){
    cout<<"true"<<endl;
   }else cout<<"false";

}



//Q5///////////////////// Number of bits to represent a number 'n' /////////////////


#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Calculate the number of bits required
    int numBits = log2(n) + 1;
    std::cout << "Number of bits required to represent " << n << " is: " << numBits << std::endl;
    return 0;
}


///////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count  =0 ;
    while(n){
        count++;
        n/=2;
    }
    cout<<count<<endl;
}

//Q6/////////////// Count the set bits in number | Bit Manipulation////////////////////////

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count  =0 ;
    while(n){
        if(n&1) count++;
        n = n>>1;   //for removing the right most bits
    }
    cout<<count<<endl;
}

//Q7////////////////////////////////// Brian Kernighan's Algorithm//////////////////


#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while(n){
        n = n & (n-1);
        count++;
    }
    cout<<count<<endl;
}

///////////////////////////////////// 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = __builtin_popcount(n); //int count = __builtin_popcount(datatype);

    cout << "Number of set bits: " << count << endl;

    return 0;
}


// Q8//////////////////////Determine a number is power of 2 or not | Bit Manipulation 

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    if(n<0) cout<<"no"<<endl;
    while(n){
        count++;
        n = n&(n-1);
    }
    if(count ==1) cout<<"yes"<<endl;
    else cout<<"false";
}

//Q9 ////////////////////////////// Determine a number is power of 2 or not///////////////
#include<bits/stdc++.h>
using namespace std;
int main(){

}

class Solution {
public:
    bool isPowerOfFour(int n) {
      if(n<=0) return false;
       if( __builtin_popcount(n)==1){
           int digitCount = floor(log2(n)+1);
           if((digitCount&1)==1 ) return true;
       }
       return false;
    }
};


//Q10///////////////////////////////////// you are given a number X you have to find the value OF xor[1,X];
//i.e 1^2^3^...X

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int x = n%4;
    if(x==0) cout<< n;
    else if(x==1) cout<< 1;
    else if(x==2) cout<< n+1;
    else if(x==3) cout<<0;
}


//Q11///////////////////////// find the using element fron the arr (LONELY NUMBER)/////////////////

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    for(int i =0;i<n;i++){
        ans = ans^arr[i];
    }
    cout<< ans;
}

//Q12//////////////////////////// find the missing number in the given array of [1,N] //////////////////////

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n-1;i++){  
        cin>>arr[i];
    }
    int ans = 0;
    for(int i =1;i<=n;i++){
        ans = ans^i;
    }

    for(int i =0;i<n-1;i++){
        ans =ans^arr[i];
    }
    cout<< ans;
}

////////////////////////////Given an integer array nums of unique elements, return all possible subsets (the power set).


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];

    for(int mask =0;mask<(1<<n);mask++){
            for(int j =0;j<n;j++){
                if(mask&(1<<j)) cout<<arr[j]<<" ";
            }cout<<endl;
        }
    }


///////////////////////////////////////////////////////////////////////////////////
// #include<bits/stdc++.h>
using namespace std;
int main(){
   
}

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
       for(int mask =0;mask<(1<<n);mask++){
           vector<int>temp;
           for(int j =0;j<n;j++){
               if(mask&(1<<j)){
                   temp.push_back(nums[j]);
               }
           }
           ans.push_back(temp);
       }
       return ans;
    }
};


///////////////////////////Print all subsets/subsequnces of an array of k length 


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin>>n>>k;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];

    for(int mask =0;mask<(1<<n);mask++){
        if( __builtin_popcount(mask)==k){
            for(int j =0;j<n;j++){
                if(mask&(1<<j)) cout<<arr[j]<<" ";
            }cout<<endl;
        }
    }
   
}



////////////////////////////1318. Minimum Flips to Make a OR b Equal to c////////////////

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip =0;
         while(a!=0 || b!=0 || c!=0){
             int rightmostbit_a = a&1;  // RIGHTMOSTBIT
             int rightmostbit_b = b&1;
             int rightmostbit_c = c&1;
             if(rightmostbit_a == 0 && rightmostbit_b ==0 && rightmostbit_c == 1) flip++;
             else if(rightmostbit_a == 0 && rightmostbit_b ==1 && rightmostbit_c == 0) flip++;
             else if(rightmostbit_a == 1 && rightmostbit_b ==1 && rightmostbit_c == 0) flip +=2;
             else if(rightmostbit_a == 1 && rightmostbit_b == 0 && rightmostbit_c ==0) flip++;
             a = a>>1;  // RIGHTSHIFT
             b = b>>1;
             c = c>>1;
          }
          return flip;
    }
};

////////////////////////////////////////////////////////////////////

class Solution {
public:
    int minFlips(int a, int b, int c) {
        int temp = (a&b);    // in the a and b both 1 bit hogi to flipcount == 2
        int ans1 = (a|b)^c;    // but from here flipcount is considered 1 so one count was missing
        int ans2 = ans1&temp;  // missing one will be considered 
        return __builtin_popcount(ans1) + __builtin_popcount(ans2);//__builtin_popcount==countSetbit
    }
};



/////////////////////////// 137. Single Number II/////////////////////////////



class Solution {
public:
    int singleNumber(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int x:nums){
           mp[x]++;
       }

       for(auto x:mp){
           int first = x.first;  // element
           int second = x.second; // freq
           if(second==1) return first;
       }
       return 0;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i<32; i++) {
            int temp = (1 << i);
            int countOne  = 0;
            for(int &num : nums) {
                if((num&temp) !=0) countOne++;
            }
            if(countOne % 3 == 1) result = (result | temp);
        }
        return result;
    }
};


////////////////////////338. Counting Bits/////////////////////////


class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i =0;i<=n;i++){
            int temp = __builtin_popcount(i);
            v.push_back(temp);
        }
        return v;
    }
};


class Solution {
public:
    vector<int> countBits(int n) {
   
       vector<int>v(n+1);
       v[0]=0;
       for(int i =1;i<=n;i++){
           if(i%2!=0) v[i] = v[i/2]+1;
           else v[i]=v[i/2];
       }
       return v;
    }
};



////////////////////////////////////////////1356. Sort Integers by The Number of 1 Bits/////////////////////////////


class Solution {
public:
   // __builtin_popcount(nums) //O(1)

    int find(int num){
        int count = 0;
        while(num){
            if(num & 1) count++;
             num = num>>1;  // num >> = 1; ans = ans+1 // ans +=1
        }
        return count++;
    }
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&](int &a, int &b){
            int count_a = find(a);
            int count_b = find(b);
            if(count_a==count_b) return a<b;
             return count_a < count_b;     // if it is true the (a<b)
        };

        sort(arr.begin(),arr.end(),lambda);  // sort(begin(arr),end(arr),lambda);

        return arr;
    }
};

///////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&](int &a, int &b){
            int count_a = __builtin_popcount(a);
            int count_b = __builtin_popcount(b);
            if(count_a == count_b) return a<b;
             return count_a < count_b;     // if it is true the (a<b) asscending order
        };

        sort(arr.begin(),arr.end(),lambda);  // sort(begin(arr),end(arr),lambda);

        return arr;
    }
};




///////////////////////////2433. Find The Original Array of Prefix Xor////////////////////////


// - pref[0] = 5.
// - pref[1] = 5 ^ 7 = 2.
// - pref[2] = 5 ^ 7 ^ 2 = 0.
// - pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.
// - pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.

//  pref == [5,2,0,3,1]
//  arr  == [a0,a1,a2,a3,a4];
//  3^1 = (a0^a1^a2^a3^a4)^(a0^a1^a2^a3) == a4 = 2 // pref[i]^pref[i-1] == arr[i]

class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n = pref.size();
        vector<int>arr(n);
        arr[0] = pref[0];
        for(int i =1;i<n;i++){
            arr[i] = pref[i]^pref[i-1];
        }

        return arr;
    }
};

/////////////////////////////////////////////////////////////////////////
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        for(int i = pref.size()-1; i > 0; i--) pref[i] = pref[i] ^ pref[i-1];
        return pref;
    }
};


////////////////////////////////////////191. Number of 1 Bits//////////////////////
//Write a function that takes the binary representation of an unsigned 
//integer and returns the number of '1' bits it has (also known as the Hamming weight).

//Approach-1 (Using simple right shift operator)
//T.C : O(1) - because the loop in the code iterates 32 times, which is a constant number regardless of the input n
//S.C : O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        for(int i = 31; i>=0; i--) {
            if(((n >> i) & 1) == 1) {
                count++;
            }
        }
        return count;
    }
};

//Approach-2 (Using simple bit magic)
//T.C : O(k) -> Where k = number of set bits (1s) in input 'n'
//S.C : O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        
        while(n) {
            n = (n&(n-1)); //This expression is used to turn off the rightmost set bit in n. This operation effectively removes one set bit in each iteration.
            count++;
        }
        
        return count;
    }
};

//Approach-3 (Using simple bit magic)
//T.C : O(log(n)) -> In each iteration, n is divided by 2 (n /= 2)
//S.C : O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n) {
            count += (n%2);
            n /= 2;
        }
        return count;
    }
};

//Approach-4 (using GCC built-in function)
//T.C : O(k) -> Where k = number of set bits (1s) in input 'n'
//S.C : O(1)
class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};



////////////////////////////////////////////////////2939. Maximum Xor Product/////////////////////////////


//******************************************************************* C++ ************************************************************************************/
//Approach-1 (Brute Force) - OVERFLOW
//T.C : O(2^n)
class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        int result = 0;
        
        for(int x = 0; x < pow(2, n); x++) {
            long long p = (a^x) * (b^x);
            result = max<long long>(result, p);
        }
        
        return result;
    }
};

//Approach-2 (Building bit by bit) - Always solve such Qns bit by bit
//T.C : O(n) for loop
class Solution {
public:
    int M = 1e9+7;
    typedef long long ll;
    int maximumXorProduct(long long a, long long b, int n) {

        ll xXora = 0;
        ll xXorb = 0;
        /*
            0 <= a, b < 2^50
            So, a and b will be represented by 50 bits only (0th bit to 49th bit)
            Now, what if x value is something which can be represented by only say 3 bits
            So, x = 0000000000000......11 (50 bits)
            So, let's say a = 101......000000000001 (50 bits)
                          x = 0000000000000......11 (50 bits, but only starting 2 bits matter)
            
            Now, notice that for a^x, From 49th bit to nth bit will be same as what is present in 'a'
            Hence the extra for loop below takes care of that
        */
        for(long long i = 49; i >= n; i--) {
            bool aset = (a >> i) & 1 > 0; //Finding the ith bit of a
            bool bset = (b >> i) & 1 > 0; //Finding the ith bit of b

            if(aset)
                xXora ^= (1ll << i);
            if(bset)
                xXorb ^= (1ll << i);
        }

        /*
            Given constraint : n = 0 to 50
            So, x = 2^0 to 2^50
            2^50 = 1000000000.......0 (total 50 bits from 0th bit in right to 49th i.e. (n-1)th bit in left)
            So, we will check from (n-1)th bit of a and b as well along with x formation
        */
        for (long long i = n-1; i >= 0; i--) {
            
            bool aset = (a & (1ll << i)) > 0; //Finding the ith bit of a
            bool bset = (b & (1ll << i)) > 0; //Finding the ith bit of b

            //If both ith bit of a and b are same
            if(aset == bset) {
                xXora ^= (1ll << i);
                xXorb ^= (1ll << i);
                continue; // we want to go for next bit we don't want to inter the xXora > xXorb if bits are same my one iteration is done
            }
            
            if(xXora > xXorb) {
                xXorb ^= (1ll << i);
            } else {
                xXora ^= (1ll << i);
            }

        }   

        xXora %= M;
        xXorb %= M;
        return (xXora * xXorb) % M;
    }
};


/////////////////////////1486. XOR Operation in an Array//////////////////////////////

class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(start+2*i);
        }

        int ans = 0;
        for(int i =0;i<temp.size();i++){
            ans = ans^temp[i];
        }

        return ans;
    }
};


////////////////Power Set/Given a string S, Find all the possible subsequences of the String in lexicographically-sorted order.//////////////////////

class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		   int n = s.size();
		   int pw= pow(2,n);
		   vector<string> ans;
		   for(int i =1;i<pw;i++){
		       int num = i;
		       int j = 0;
		       string temp ="";
		       while(num){
		           if(num & 1) {
		               temp=temp+s[j];
		           }
		           j++;
		           num = num>>1;
		       }
		       ans.push_back(temp);
		   }
		   sort(ans.begin(),ans.end());
		   return ans;
		}
};


//*************************Determining Numbers (Hackerearth) | Bit Manipulation | Amazon Interview//////////////////
///*********************** Flip the all bits of a Positive Number | Bit Manipulation
///*********************************** Sum vs XOR ( Hackerrank ) |////////////////
//*****************1611. Minimum One Bit Operations to Make Integers Zero***********************

/////////////*************** 421. Maximum XOR of Two Numbers in an Array //////////////////////////////

///////////////3007. Maximum Number That Sum of the Prices Is Less Than or Equal to K//////////////////////////
///////////////////////Pseudo-Palindromic Paths in a Binary Tree | 2 Ways | Bit Magic | Leetcode 1457//////////////////////
///////////////////////Maximum Length of a Concatenated String with Unique Characters | Using Bit Magic | Leetcode 1239////
