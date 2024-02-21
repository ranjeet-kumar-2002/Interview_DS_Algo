//A function which calls itself again and again until a specific condition met

#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<n<<endl;
    fun(n-1); 
}
int main(){
    int n=5;
   fun(n);
}

///////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
void fun3(int n)
{
    cout << n << " days remaining for the birthday" << endl;
}
void fun2(int n)
{
    cout << n << " days remaining for the birthday" << endl;
}
void fun1(int n)
{
    cout << n << " days remaining for the birthday" << endl;
}

void fun0(int n)
{
    cout << " happy birthday" << endl;
}
int main()
{
    fun3(3);
    fun2(2);
    fun1(1);
    fun0(0);
}


///////////////////////////////////////////////////////////////////////

// 3 days remaining for the birthday
// 2 days remaining for the birthday
// 1 days remaining for the birthday
//  happy birthday !

#include <bits/stdc++.h>
using namespace std;

void fun0(int n)
{
    cout << " happy birthday !" << endl;
}

void fun1(int n)
{
    cout << n << " days remaining for the birthday" << endl;
    fun0(n-1);
}

void fun2(int n)
{
    cout << n << " days remaining for the birthday" << endl;
    fun1(n-1);
}

void fun3(int n)
{
    cout << n << " days remaining for the birthday" << endl;
     fun2(n-1);
}

int main()
{
    fun3(3);
}

//////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
void fun3(int n){
    if(n==0){  // basecase
        cout << " happy birthday !" << endl;
        return;
    }
     cout << n << " days remaining for the birthday" << endl; // kam
     fun3(n-1);  //call
}  
int main(){
     fun3(3);
}

/////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
int main(){
  for(int i =5;i>=0;i--){
    cout<<i<<" days left for birthday!"<<endl;
  }
   cout<<"happy birthday!"<<endl;
}


/////////////// factorial of a number//////////////////

#include <iostream>
using namespace std;
int f(int n){
    if(n==0) return 1; // if n==0 it will directaly return from here
    int fact = 0;
    fact = n*f(n-1);
    return fact;
}

int main() {
   cout<<f(0);
    return 0;
}
////////////////////////////////////////////////
#include <iostream>
using namespace std;
int f(int n){
    if(n==1) return 1;
     return n*f(n-1);
}

int main() {
   cout<<f(5);
    return 0;
}
//////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int f(int n){
    if(n==1) return 1;
    int fact = n*f(n-1);
    return fact;
}

int main() {
   cout<<f(5);
    return 0;
}
/////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int f(int n,int p){
    if(n==1) return p;
    return f(n-1,p*n);   // tail recursion 
    
}

int main() {
   cout<<f(5,1);
    return 0;
}
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int f(int n,int p){
    if(n==1) return p;
    int ans = 0;
    ans =  f(n-1,p*n);
    return ans;
}

int main() {
   cout<<f(5,1);
    return 0;
}
///////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int f(int n,int p){
    if(n==1) return p;
    int ans =  f(n-1,p*n); //tail recursion space otimize 
    return ans;
    
}

int main() {
   cout<<f(5,1);
    return 0;
}

///////////////////////////////////////////sum of n natural number////////////////

#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    return  n+sum(n-1);
}

int main() {
   cout<<sum(5);
    return 0;
}
//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    int totalsum =  n+sum(n-1);
    return totalsum;
}

int main() {
   cout<<sum(5);
    return 0;
}

///////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    int totalsum = 0;
    totalsum= n+sum(n-1);
    return  totalsum;
}

int main() {
   cout<<sum(5);
    return 0;
}

//////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int sum(int n,int total){
    if(n==1) return total+1;
    return  sum(n-1,total+n);  // tail recursion space otimize 
}

int main() {
   cout<<sum(5,0);
    return 0;
}
////////////////////////////////////// power of two//////////////////////////
#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return 2;
    int power = 0;
    power =  x*pow(x,n-1);
    return power;
}
int main() {
   cout<<pow(2,4);
    return 0;
}

//////////////////////////////////////
#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return 2;
    int power =  x*pow(x,n-1);
    return power;
}
int main() {
   cout<<pow(2,4);
    return 0;
}
////////////////////////////////////////////
#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==1) return 2;
    return  x*pow(x,n-1);
}
int main() {
   cout<<pow(2,4);
    return 0;
}

#include <iostream>
using namespace std;
int pow(int x,int n){
    if(n==0) return 1;
   return  x*pow(x,n-1);
}
int main() {
   cout<<pow(2,4);
    return 0;
}

///////////////////////// Sum of Square ////////////////////////////

#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    int square = n*n+sum(n-1);
    return square;
}
int main() {
   cout<<sum(4);
    return 0;
}
/////////////////////////////////////////////////
#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
    int square = 0;
    square = n*n+sum(n-1);
    return square;
}
int main() {
   cout<<sum(4);
    return 0;
}

////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int sum(int n){
    if(n==1) return 1;
   return  n*n+sum(n-1);
}
int main() {
   cout<<sum(4);
    return 0;
}

//////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int sum(int n,int total){
    if(n==1) return n*n+total;
    int square = 0;
    square = sum(n-1,n*n+total);
    return square;
}
int main() {
   cout<<sum(4,0);
    return 0;
}


///////////////////////// fibonacci series///////////////////////

#include <iostream>
using namespace std;
int fib(int n){
   if(n==0 ) return 0;
   if(n==1) return 1;
   int ans = 0;
   ans = fib(n-1)+fib(n-2);
   return ans;
}
int main() {
   cout<<fib(10);
    return 0;
}
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int fib(int n){
   if(n==0 ) return 0;
   if(n==1) return 1;
   int ans1 = 0;
   int ans2 = 0;
   ans1 = fib(n-1);
   ans2=fib(n-2);
   int ans = ans1+ans2;
   return ans;
}
int main() {
   cout<<fib(10);
    return 0;
}
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;
int fib(int n){
   if(n==0 ) return 0;
   if(n==1) return 1;
   return fib(n-1)+fib(n-2);
}
int main() {
   cout<<fib(10);
    return 0;
}

////////////////////// stairs///////////////////////////////////////////

#include <iostream>
using namespace std;
int stairs(int n){
   if(n==0) return 1;
   if(n==1) return 1;
   if(n==2) return 2;
   return stairs(n-1)+stairs(n-2);
}
int main() {
   cout<<stairs(10);
    return 0;
}


/////////////////////////////

#include <iostream>
using namespace std;
int stairs(int n){
   if(n==0) return 1;
   if(n==1) return 1;
   if(n==2) return 2;
   int ans = stairs(n-1)+stairs(n-2);
   return ans;
}
int main() {
   cout<<stairs(10);
    return 0;
}
//////////////////////////////
#include <iostream>
using namespace std;
int stairs(int n){
   if(n==0) return 1;
   if(n==1) return 1;
   if(n==2) return 2;
   int ans = 0;
   ans = stairs(n-1)+stairs(n-2);
   return ans;
}
int main() {
   cout<<stairs(10);
    return 0;
}


///////////////Euclidean algorithms////////////////////////////////

#include <iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main() {
   cout<<gcd(18,48);
    return 0;
}
/////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
void gcd(int a,int b){
    if(b==0) {
        cout<< a<<endl;
        return;
    }
   gcd(b,a%b);
}
int main() {
    gcd(18,48);
    return 0;
}
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int gcd(int a,int b){
   if(b==0) return a;
   int temp =  gcd(b,a%b);
   return temp;
}
int main() {
   cout<<gcd(18,48);
    return 0;
}
//////////////////////////////////////////////////////////
#include <iostream>
using namespace std;
int gcd(int a,int b){
   if(b==0) return a;
   int temp = 0;
   temp = gcd(b,a%b);
   return temp;
}
int main() {
   cout<<gcd(18,48);
    return 0;
}

///////////////////////GCD GFG//////////////////////////////////

class Solution
{
	public:
	int f(int A,int B){
	    if(B==0) return A;
	    return f(B,A%B);
	}
    int gcd(int A, int B) { 
	  return f(A,B);
	      
	} 
};

class Solution
{
	public:
	int f(int A,int B){
	    if(B==0) return A;
	    int temp = f(B,A%B);
	    return temp;
	}
    int gcd(int A, int B) { 
	  return f(A,B);
	      
	} 
};


class Solution
{
	public:
	int f(int A,int B){
	    if(B==0) return A;
	    int temp = 0;
	    temp = f(B,A%B);
	    return temp;
	}
    int gcd(int A, int B) { 
	  return f(A,B);
	      
	} 
};


//////////////////// print array////////////////////////

#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>arr,int indx){
    cout<<arr[indx]<<endl;
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   for(int i =0;i<5;i++) print(arr,i);
  return 0;
}


#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>arr,int indx){
    if(indx==-1) return;
    print(arr,indx-1);
    cout<<arr[indx]<<endl;
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   int n =arr.size();
  print(arr,n-1);
  return 0;
}


////////////////////////////////////////////////////////////////////////

#include <iostream>
#include<vector>
using namespace std;

void print(vector<int>arr,int indx,int n){
    if(indx==n) return;
    cout<<arr[indx]<<endl;
    print(arr,indx+1,n);
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   int n = arr.size();
   print(arr,0,n);
  return 0;
}

////////////////////////////////print reverse of the given array ///////////////////////////////////

#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>arr,int indx,int n){
    if(indx==n) return;
    print(arr,indx+1,n);
    cout<<arr[indx]<<endl;
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   int n = arr.size();
   print(arr,0,n);
  return 0;
}

///////////////////////////////////////////////////////////////////

#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>arr,int indx){
    if(indx==-1) return;
    cout<<arr[indx]<<endl;
    print(arr,indx-1);
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   int n = arr.size();
   print(arr,n-1);
  return 0;
}


//////////////// sum of all element in the given array//////////////////////////////////

#include <iostream>
#include<vector>
using namespace std;
int sum(vector<int>arr,int indx){
    if(indx==arr.size()) return 0;
    return arr[indx]+sum(arr,indx+1);
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   int n =arr.size();
   cout<<sum(arr,0);
  return 0;
}

//////////////////////////////////////////////////////////////

#include <iostream>
#include<vector>
using namespace std;
int sum(vector<int>arr,int indx){
    if(indx==arr.size()) return 0;
    int total =0;
    total =total+arr[indx];
    total =total+sum(arr,indx+1);
    return total;
}
int main() {
   vector<int> arr = {3,7,6,2,8};
   int n =arr.size();
   cout<<sum(arr,0);
  return 0;
}

/////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;
void sum(vector<int> arr, int indx, int &total) {
    if (indx == arr.size()) return;
    total += arr[indx];
    sum(arr, indx + 1, total);
}
int main() {
    vector<int> arr = {3, 7, 6, 2, 8};
    int n = arr.size();
    int total = 0;
    sum(arr, 0, total);
    cout << total;
    return 0;
}


///////////////////// find the minielement in the given array/////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int findmini(vector<int> arr, int indx) {
    if (indx == arr.size()) return INT_MAX; // Return a large value for empty array
    return min(arr[indx], findmini(arr, indx + 1));
}

int main() {
    vector<int> arr = {3, 7, 6, 2, 8};
    int mini = findmini(arr, 0);
    cout << "Minimum element: " << mini << endl;
    return 0;
}


/////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

int findmini(vector<int> arr, int indx) {
    if (indx == arr.size()) return INT_MAX; // Return a large value 
    int ans = INT_MAX;
    ans = min(ans,arr[indx]);
    ans = min(ans,findmini(arr,indx+1));
    return ans;
}
int main() {
    vector<int> arr = {3, 7, 6, 2, 8};
    int mini = findmini(arr, 0);
    cout << "Minimum element: " << mini << endl;
    return 0;
}

/////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;

void findmini(vector<int> arr, int indx,int &ans) {
    if (indx == arr.size()) return;
    ans = min(ans,arr[indx]);
    findmini(arr,indx+1,ans);
}
int main() {
    vector<int> arr = {3, 7, 6, 2, 8};
     int ans = INT_MAX;
     findmini(arr,0,ans);
    cout << "Minimum element: " << ans << endl;
    return 0;
}


/////////////////////check polimdrome//////////////////////////////

#include <bits/stdc++.h>
using namespace std;

bool check(string s,int i,int j) {
    if(i>=j) return true;
    if(s[i] !=s[j]) return false;
    return check(s,i+1,j-1);
}
int main() {
    string s = "naman";
    cout<<check(s,0,s.size()-1);
    return 0;
}

/////////////////////////////////////// count vowel//////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='i'||ch=='u' || ch=='o'|| ch=='e') return true;
    return false;
}
int vowel(string s,int indx) {
   if(indx==s.size()) return 0;
   int count = 0;
   if(isvowel(s[indx])){
       count++;
   }
   count +=vowel(s,indx+1);
   return count;
}
int main() {
    string s = "naman";
    cout<<vowel(s,0);
}

///////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='i'||ch=='u' || ch=='o'|| ch=='e') return true;
    return false;
}
int vowel(string s,int indx) {
   if(indx==s.size()) return 0;
   if(isvowel(s[indx])){
      return 1+vowel(s,indx+1);
   }
   return vowel(s,indx+1);
}
int main() {
    string s = "naman";
    cout<<vowel(s,0);
}

/////////////////////////////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;
bool isvowel(char ch){
    if(ch=='a' || ch=='i'||ch=='u' || ch=='o'|| ch=='e') return true;
    return false;
}
int vowel(string s,int indx) {
   if(indx==-1) return 0;
   if(isvowel(s[indx])){
      return 1+vowel(s,indx-1);
   }
   return vowel(s,indx-1);
}
int main() {
    string s = "naman";
    cout<<vowel(s,s.size()-1);
}

//////////////////////////// reverse the given string//////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
void reverse(string &s,int i,int j) {
  if(i>=j) return;
  swap(s[i],s[j]);
  reverse(s,i+1,j-1);
}
int main() {
    string s = "ranjeet";
    reverse(s,0,s.size()-1);
    cout<<s<<endl;
}

///////////////// lower case to uppercase///////////////////////////////


#include <bits/stdc++.h>
using namespace std;
void lowertoUpper(string &s,int indx) {
  if(indx==s.size()) return;
  s[indx] ='A'+s[indx]-'a'; // 65
  lowertoUpper(s,indx+1);
}
int main() {
    string s = "ranjeet";
    lowertoUpper(s,0);
    cout<<s<<endl;
}


/////////////////////////////////////////// lenear searching check is target is present//////////////////////////////////////////


#include <bits/stdc++.h>
using namespace std;
bool ispresent(vector<int> arr, int indx,int target) {
    if(indx==arr.size()) return false;
    if(arr[indx]==target) return true;
    return ispresent(arr,indx+1,target);
}
int main() {
    vector<int> arr = {3, 7, 6, 2, 8};
    int target = 11;
    cout<<ispresent(arr,0,target);
}


////////////////////////////////////////////binary searching///////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
bool bs(vector<int>&arr, int start,int end,int target) {
   if(start>end) return false;
   int mid = start+(end-start)/2;
   if(arr[mid]==target) return true;
  else if(arr[mid]>target){
       return bs(arr,start,mid-1,target);
   }else {
       return bs(arr,mid+1,end,target);
   }
}
int main() {
    vector<int> arr = {2, 11, 23, 24, 50};
    int n = arr.size();
    int target = 20;
    cout<<bs(arr,0,n-1,target);
}

///////////////////////************************Print Subsets | Print PowerSets | Print all Subsequences///////////////////////////


#include <bits/stdc++.h>
using namespace std;

void subsequences(vector<int>& arr, vector<int> temp, int indx) {
    if (indx == arr.size()) {
        for (int i = 0; i < temp.size(); i++) {
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }
    subsequences(arr, temp, indx + 1); // no
    temp.push_back(arr[indx]);
    subsequences(arr, temp, indx + 1); //yes
   
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> temp;
    subsequences(arr, temp, 0);
    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
void subsequences(vector<int>& arr, vector<int> temp, int indx,vector<vector<int>>&ans) {
    if (indx == arr.size()) {
        ans.push_back(temp);
        return;
    }
    subsequences(arr, temp, indx + 1,ans); // no
    temp.push_back(arr[indx]);
    subsequences(arr, temp, indx + 1,ans); //yes
   
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> temp;
    vector<vector<int>>ans;
    subsequences(arr, temp, 0,ans);
    for(int i =0;i<ans.size();i++){
        for(int j =0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}

////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>&arr,vector<int>temp,vector<vector<int>>&ans,int indx){
        if(indx==arr.size()){
            ans.push_back(temp);
            return ;
        }
        f(arr,temp,ans,indx+1);
        temp.push_back(arr[indx]);
        f(arr,temp,ans,indx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        f(nums,temp,ans,0);
        return ans;
    }
};

///////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans,int indx){
        if(indx==arr.size()){
            ans.push_back(temp);
            return ;
        }
        f(arr,temp,ans,indx+1);
        temp.push_back(arr[indx]);
        f(arr,temp,ans,indx+1);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        f(nums,temp,ans,0);
        return ans;
    }
};
/////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;

void subsequences(string &s,string temp, int indx,vector<string>&ans) {
    if (indx ==s.size()) {
        ans.push_back(temp);
        return;
    }
    subsequences(s, temp, indx + 1,ans); // no
    temp.push_back(s[indx]);
    subsequences(s, temp, indx + 1,ans); //yes
   
}

int main() {
    string s ="abc";
    string temp;
    vector<string>ans;
    subsequences(s, temp, 0,ans);
    for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<endl;
    }
    return 0;
}


///////////////////////////////////////////////90. Subsets II////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<int>temp,set<vector<int>>&st,int indx){
        if(indx>=nums.size()){
            st.insert(temp);
            return ;
        }
        f(nums,temp,st,indx+1);
        temp.push_back(nums[indx]);
        f(nums,temp,st,indx+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>temp;
        f(nums,temp,st,0);
        for(auto &x:st){
            ans.push_back(x);
        }
        return ans;
    }
};

/////////////////////////////////////////////////////////////////////////////////


class Solution {
private :
void helper(int i , vector<int> &subset , vector<int> &nums , vector<vector<int>> &ans){
    if(i >= nums.size() ){
        ans.push_back(subset) ;
        return ;
    }
    subset.push_back(nums[i]) ;
    helper(i + 1 , subset , nums , ans) ;
    subset.pop_back() ;
    while(i < nums.size() - 1 && (nums[i] == nums[i + 1]))i++;
    helper(i + 1 , subset , nums , ans) ;
    return ;
}
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin() , nums.end() ) ;
    vector<int>subset ;
    vector<vector<int> > ans ;
    helper(0 , subset , nums , ans) ;
    return ans ;
}
};

////////////////////////// subset sum//////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
void subsetsum(vector<int>& arr,int i,int sum) {
    if (i == arr.size()) {
       cout<<sum<<endl;
        return;
    }
    subsetsum(arr,i + 1,sum); // no
    subsetsum(arr,i + 1,sum+arr[i]); //yes
   
}

int main() {
    vector<int> arr = {3, 4, 5};
    int sum = 0;
    subsetsum(arr, 0,sum);
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;
int sum = 0;
void subsetsum(vector<int>& arr, int i) {
    if (i == arr.size()) {
        cout << sum << endl;
        return;
    }
    // Exclude the current element
    subsetsum(arr, i + 1);
    // Include the current element
    sum += arr[i];
    subsetsum(arr, i + 1);
    // Backtrack to the previous state
    sum -= arr[i];
}
int main() {
    vector<int> arr = {3, 4, 5};
    subsetsum(arr, 0);
    return 0;
}

///////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;
void subsetsum(vector<int>& arr, int i,int sum) {
    if (i == arr.size()) {
        cout << sum << endl;
        return;
    }
    subsetsum(arr, i + 1,sum);
    sum += arr[i];
    subsetsum(arr, i + 1,sum);
    sum -= arr[i];
}

int main() {
    vector<int> arr = {3, 4, 5};
    int sum = 0;
    subsetsum(arr, 0,sum);
    return 0;
}


////////////////////////////////////////////////////

#include <iostream>
#include <vector>
using namespace std;
void subsetsum(vector<int>& arr, int i,int sum,vector<int>&ans) {
    if (i == arr.size()) {
        ans.push_back(sum);
        return;
    }
    subsetsum(arr, i + 1,sum,ans);
    subsetsum(arr, i + 1,sum+arr[i],ans);
}

int main() {
    vector<int> arr = {3, 4, 5};
    int sum = 0;
    vector<int>ans;
    subsetsum(arr, 0,sum,ans);
    for(auto &x:ans) cout<<x<<endl;
    return 0;
}

/////////////////////////////////////target sum/target subset sum////////////////////////////////////

bool targetsum(vector<int>& arr, int i, int sum, int target) {
    if (i == arr.size()) {
        return sum == target;
    }
    if (targetsum(arr, i + 1, sum, target)) {
        return true;
    }
    if (targetsum(arr, i + 1, sum + arr[i], target)) {
        return true;
    }
    return false;
}

int main() {
    vector<int> arr = {3, 4, 5};
    int sum = 0;
    int target = 12;
    cout << targetsum(arr, 0, sum, target);
    return 0;
}


///////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
#include <vector>
using namespace std;
bool targetsum(vector<int>arr, int i, int target) {
    if(target==0) return true;
    if(i==arr.size() || target<0) return false;
    bool flag1 = targetsum(arr,i+1,target); // no 
    bool flag2 = targetsum(arr,i+1,target-arr[i]); // no 
    return flag1 || flag2;
}

int main() {
    vector<int> arr = {3, 4, 5};
    int target = 12;
    cout << targetsum(arr, 0,target);
    return 0;
}
////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
#include <vector>
using namespace std;
bool targetsum(vector<int>arr, int i, int target) {
    if(target==0) return true;
    if(i==arr.size() || target<0) return false;
    bool flag1 = targetsum(arr,i+1,target); // no 
    target = target -arr[i];
    bool flag2 = targetsum(arr,i+1,target); // no 
    return flag1 || flag2;
}

int main() {
    vector<int> arr = {3, 4, 5};
    int target = 3;
    cout << targetsum(arr, 0,target);
    return 0;
}

///////////////////////////////// target sum count for only positive and except zero ////////////////////////////////////

#include<bits/stdc++.h>
#include <vector>
using namespace std;
bool targetsum(vector<int>arr, int i, int target) {
    if(target==0) return true;
    if(i==arr.size() || target<0) return false;
    bool skip = targetsum(arr,i+1,target); // no 
    bool take = targetsum(arr,i+1,target -arr[i]); // yes
    return skip || take;
}

int main() {
    vector<int> arr = {1 ,0};
    int sum = 0;
    cout << targetsum(arr, 0,sum);
    return 0;
}

////////////////////////////////////////target sum count for only positive and including zero////////////////////////

#include<bits/stdc++.h>
#include <vector>
using namespace std;
int targetsum(vector<int>arr, int i, int target) {
    if(i==arr.size() && target==0) return 1;
    if(i==arr.size() || target<0) return 0;
    bool skip = targetsum(arr,i+1,target); // no 
    bool take = targetsum(arr,i+1,target -arr[i]); // yes
    return skip + take;
}

int main() {
    vector<int> arr = {1 ,0};
    int sum = 0;
    cout << targetsum(arr, 0,sum);
    return 0;
}

//////////////////////////////////////////////Perfect Sum Problem//////////////////////////////////////
class Solution{
	public:
	int mod = 1e9+7;
	vector<vector<int>>dp;
	int f(int arr[],int i,int n,int sum){
	    if(i== n && sum==0) return 1;
	    if(i==n || sum<0) return 0;
	    if(dp[i][sum] !=-1) return dp[i][sum];
	    int skip = f(arr,i+1,n,sum)%mod;
	    int take = f(arr,i+1,n,sum-arr[i])%mod;
	    return dp[i][sum] = skip%mod+take%mod;
	}
	int perfectSum(int arr[], int n, int sum){
	    dp.resize(n+1,vector<int>(sum+1,-1));
	    return f(arr,0,n,sum)%mod;
	}
};

//////////////////////////// Target Sum with Repetition/////////////////////////////////////////

#include<bits/stdc++.h>
#include <vector>
using namespace std;
int targetsumReapet(vector<int>arr, int i, int target) {
    if(target==0) return 1;
    if(i==arr.size() || target<0) return 0;
    int skip =targetsumReapet(arr,i+1,target); // no 
    int take = targetsumReapet(arr,i,target -arr[i]); // yes
    return skip+take;
}

int main() {
    vector<int> arr = {2 ,3,4};
    int sum = 6;
    cout << targetsumReapet(arr, 0,sum);
    return 0;
}


/////////////////////////////////46. Permutations///////////////////////////////////////////////////


class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,vector<int>temp,vector<bool>visited){
        if(visited.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i =0;i<nums.size();i++){
            if(visited[i]==false){
                visited[i] = true;
                temp.push_back(nums[i]);
                f(nums,ans,temp,visited);
                visited[i] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        vector<bool>visited(nums.size(),false);
        f(nums,ans,temp,visited);
        return ans;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,vector<bool>&visited){
        if(visited.size()==temp.size()){
            ans.push_back(temp);
            return;
        }
        for(int i =0;i<nums.size();i++){
            if(visited[i]==false){
                visited[i] = true;
                temp.push_back(nums[i]);
                f(nums,ans,temp,visited);
                visited[i] = false;
                temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>temp;
        vector<bool>visited(nums.size(),false);
        f(nums,ans,temp,visited);
        return ans;
    }
};

/////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans ,int indx){
        if(indx==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i =indx;i<nums.size();i++){
           swap(nums[indx],nums[i]);
           f(nums,ans,indx+1);
           swap(nums[indx],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        f(nums,ans,0);
        return ans;
    }
};

/////////////////////////////////////47. Permutations II///////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<int>&temp,set<vector<int>>&st,vector<bool>&visited){
      if(visited.size()==temp.size()){
          st.insert(temp);
          return ;
      }
      for(int i =0;i<nums.size();i++){
          if(visited[i]==false){
              visited[i] = true;
              temp.push_back(nums[i]);
              f(nums,temp,st,visited);
              visited[i]=false;
              temp.pop_back();
          }
      }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>visited(nums.size(),false);
        set<vector<int>>st;
        f(nums,temp,st,visited);
        for(auto &x:st){
            ans.push_back(x);
        }
        return ans;
    }
};
//////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<int>temp,set<vector<int>>&st,vector<bool>visited){
      if(visited.size()==temp.size()){
          st.insert(temp);
          return ;
      }
      for(int i =0;i<nums.size();i++){
          if(visited[i]==false){
              visited[i] = true;
              temp.push_back(nums[i]);
              f(nums,temp,st,visited);
              visited[i]=false;
              temp.pop_back();
          }
      }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        vector<bool>visited(nums.size(),false);
        set<vector<int>>st;
        f(nums,temp,st,visited);
        for(auto &x:st){
            ans.push_back(x);
        }
        return ans;
    }
};

//////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    void f(vector<int>&nums,set<vector<int>>&st,int indx){
      if(indx == nums.size()){
          st.insert(nums);
          return ;
      }
      for(int i = indx ;i<nums.size();i++){
          swap(nums[i],nums[indx]);
          f(nums,st,indx+1);
          swap(nums[i],nums[indx]);
      }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>>st;
        f(nums,st,0);
        for(auto &x:st){
            ans.push_back(x);
        }
        return ans;
    }
};


///////////////////////////////////////////////////////////////////////////////////////


class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,int indx){
      if(indx == nums.size()){
          ans.push_back(nums);
          return ;
      }
      vector<bool>visited(21,false);
      for(int i = indx ;i<nums.size();i++){
         if(visited[nums[i]+10]==false){
             swap(nums[i],nums[indx]);
             f(nums,ans,indx+1);
             swap(nums[i],nums[indx]);
             visited[nums[i]+10] = true;
         }
      }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        f(nums,ans,0);
        return ans;
    }
};


////////////////////////// 60. Permutation Sequence //////////////////////////////////

class Solution {  //TLE
public:
   void f(vector<int>&nums,string &s,vector<string>&ans,vector<bool>&visited){
       if(s.size()==visited.size()){
           ans.push_back(s);
           return;
       }
       for(int i =0;i<nums.size();i++){
           if(visited[i]==false){
               visited[i] =true;
               s+=to_string(nums[i]);
               f(nums,s,ans,visited);
               visited[i]=false;
               s.pop_back();
           }
       }
   }
    string getPermutation(int n, int k) {
        vector<string>ans;
        string s= "";
        vector<bool>visited(n,false);
        vector<int>nums;
        for(int i =1;i<=n;i++){
            nums.push_back(i);
        }
        f(nums,s,ans,visited);
        return ans[k-1];
    }
};


//////////////////////////////////////////////Ways to sum to N gfg/////////////////////////////////


class Solution
{
  public:
  int mod = 1e9+7; 
    int f(int arr[],int m,int sum,vector<int>&dp){
        if(sum==0) return 1;
        if(sum<0) return 0;
        if(dp[sum]!=-1) return dp[sum];
        int ans = 0;
        for(int i =0;i<m;i++){
            ans =ans%mod+f(arr,m,sum-arr[i],dp)%mod;
        }
        return dp[sum] = ans%mod;
    }
    int countWays(int arr[], int m, int N){
        vector<int>dp(N+1,-1);
        return f(arr,m,N,dp);
    } 
};

////////////////////////////////Rat in a Maze Problem - I///////////////////////////////////////////

class Solution{
    public:
    int row[4] = {0,1,0,-1};
    int col[4] = {1,0,-1,0};
    string dir = "RDLU";
    bool isvalid(int row,int col,int n){
        if(row>=0 && col>=0 && row<n && col<n) return true;
        return false;
    }
    void f(vector<vector<int>> &matrix, int n,vector<string>&ans,int i, int j,string &temp,vector<vector<bool>>&visited){
        if(i==n-1 && j==n-1){
            ans.push_back(temp);
            return;
        }
        visited[i][j]=true;
        for(int k = 0;k<4;k++){
          int newi=i+row[k];
          int newj=j+col[k];
          if(isvalid(newi,newj,n) && !visited[newi][newj] && matrix[newi][newj]==1){
              temp.push_back(dir[k]);
              f(matrix,n,ans,newi,newj,temp,visited);
              temp.pop_back();
          }
        }
        visited[i][j]=false;
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
       vector<string>ans;
       vector<vector<bool>>visited(n,vector<bool>(n,false));
       string temp;
       if(m[0][0]==0 || m[n-1][n-1]==0) return ans;
       f(m,n,ans,0,0,temp,visited);
       return ans;
    }
};

////////////////////////////Print N-bit binary numbers having more 1s than 0s/////////////////////////////////

class Solution{
public:	
    void f(int N,vector<string>&ans,string &temp,int zero,int one){
        if(temp.size()==N){
            ans.push_back(temp); return;
        }
        temp.push_back('1');
        f(N,ans,temp,zero,one+1);
        temp.pop_back();
        
        if(zero<one){
            temp.push_back('0');
            f(N,ans,temp,zero+1,one);
            temp.pop_back();
        }
       
    }
	vector<string> NBitBinary(int N){
	    vector<string>ans;
	    string temp="";
	    f(N,ans,temp,0,0);
	    return ans;
	}
};

///////////////////////////////////////////////////////////////////////////////


class Solution{
public:	
    void f(int N,vector<string>&ans,string &temp,int zero,int one){
        if(temp.size()==N){
            ans.push_back(temp); return;
        }
       
        if(zero<one){
            temp.push_back('0');
            f(N,ans,temp,zero+1,one);
            temp.pop_back();
        }
        
        temp.push_back('1');
        f(N,ans,temp,zero,one+1);
        temp.pop_back();
        
       
    }
	vector<string> NBitBinary(int N){
	    vector<string>ans;
	    string temp="";
	    f(N,ans,temp,0,0);
	    sort(ans.begin(),ans.end(),greater<string>());
	    return ans;
	}
};


///////////////////////////////////////22. Generate Parentheses//////////////////////////////////


class Solution {
public:
    void f(int n, int left,int right,vector<string>&ans,string &temp){
        if(left == n && right == n){
            ans.push_back(temp);
            return ;
        }
        if(left<n){
            temp.push_back('(');
            f(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        if(left>right){
            temp.push_back(')');
            f(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
       string temp;
       f(n,0,0,ans,temp);
       return ans;  
    }
};

///////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    void f(int n, int left,int right,vector<string>&ans,string temp){
        if(left == n && right == n){
            ans.push_back(temp);
            return ;
        }
        if(left<n){
            temp.push_back('(');
            f(n,left+1,right,ans,temp);
            temp.pop_back();
        }
        if(left>right){
            temp.push_back(')');
            f(n,left,right+1,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
       vector<string> ans;
       string temp;
       f(n,0,0,ans,temp);
       return ans;  
    }
};


// Static Variable: When a variable is declared as static within a function, it means 
// that the variable retains its value between function calls. In other words, the variable 
// is initialized only once and retains its value across multiple calls to the function.


// If you do not use the static keyword in this context, the variables left and right will become local 
// variables of the function. This means that their values will not persist between calls to the function.
//  Each time the function is called, new instances of left and right will be created and initialized to 0.

class Solution {
public:
    void f(int n, vector<string>& ans, string &temp) {
         static int left = 0;
         static int right = 0;

        if (left == n && right == n) {
            ans.push_back(temp);
            return;
        }

        if (left < n) {
            temp.push_back('(');
            left = left + 1;
            f(n, ans, temp);
            temp.pop_back();
            left = left - 1;
        }

        if (left > right) {
            temp.push_back(')');
            right = right + 1;
            f(n, ans, temp);
            temp.pop_back();
            right = right - 1;
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        f(n, ans, temp); 
        return ans;
    }
};
/////////////////////////////////////39. Combination Sum ///////////////////////////////////////

/////////////////////////// using subset approach/////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int target,int sum,int i){
        if(sum>target) return;
        if(i==nums.size()) return ;
        if(sum==target){
            ans.push_back(temp);
            return ;
        }

        temp.push_back(nums[i]);
        f(nums, ans, temp, target,sum+nums[i], i ); // yes
        temp.pop_back(); // backtrack: remove the last element for the next iteration
        f(nums, ans, temp,target, sum, i+1); // no
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(nums,ans,temp,target,0,0);
        return ans;
    }
};


///////////////////////////using different approach///////////////////////////////////////
class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int target,int sum,int indx){
        if(sum>target) return;
        if(sum==target){
            ans.push_back(temp);
            return ;
        }
        for(int i = indx;i<nums.size();i++){
            temp.push_back(nums[i]);
            f(nums,ans,temp,target,sum+nums[i],i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(nums,ans,temp,target,0,0);
        return ans;
    }
};


//////////////////// another method to writing same code////////////////////////////////////

class Solution {
public:
    void f(vector<int>&nums,vector<vector<int>>&ans,vector<int>&temp,int target,int sum,int i){
        if(sum>target) return;
        if(i==nums.size()) return ;
        if(sum==target){
            ans.push_back(temp);
            return ;
        }

        temp.push_back(nums[i]);
        sum = sum+nums[i];
        f(nums, ans, temp, target,sum, i ); // yes
        sum = sum-nums[i];
        temp.pop_back(); // backtrack: remove the last element for the next iteration
        f(nums, ans, temp,target, sum, i+1); // no
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        f(nums,ans,temp,target,0,0);
        return ans;
    }
};


///////////////////////////////////////////// minus use karke bhi karna hai//////////////////////////////////////////////////



















////////////////////////////////40. Combination Sum II//////////////////////////////////////////

class Solution {
public:
        void help(int i, vector<int> &arr, int n, vector<int> &subSet, vector<vector<int>> & powerSet, int sum, int target) {  
            if(sum == target) {
                powerSet.push_back(subSet) ;
                return;
            }
            if(sum > target) return ;
            if(i == n) return;
            subSet.push_back(arr[i]) ;
            help(i + 1, arr, n, subSet, powerSet, sum+arr[i], target) ;    
            subSet.pop_back();
            while(i + 1 < arr.size() && arr[i] == arr[i + 1]) i++ ; // to avoiding duplicate
            help(i + 1, arr, n, subSet, powerSet, sum, target) ;
        }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int> subSet ;
            vector<vector<int>> powerSet ;
            int sum = 0;
            int n = candidates.size() ;
            sort(candidates.begin(), candidates.end()) ;

            help(0, candidates, n, subSet, powerSet, sum, target) ;
                
            return powerSet ;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
        void help(int i, vector<int> &arr, int n, vector<int> &subSet, int sum, int target, set<vector<int>>&st) {
            
            if(sum == target)   {
                st.insert(subSet) ;
                return;
            }
            if(sum > target) return ;
            if(i == n) return;
            subSet.push_back(arr[i]) ;
            help(i + 1, arr, n, subSet,sum+arr[i], target,st) ;
            subSet.pop_back();
            while(i + 1 < arr.size() && arr[i] == arr[i + 1]) i++; // avoding duplicate
            help(i + 1, arr, n, subSet,sum, target,st) ;
        }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int> subSet ;
            vector<vector<int>> powerSet ;
            int sum = 0;
            int n = candidates.size() ;
            sort(candidates.begin(), candidates.end()) ;
            set<vector<int>>st;
            help(0, candidates, n, subSet, sum, target,st) ;
           for(auto &x:st){
              powerSet.push_back(x);
           }
           return powerSet ;
    }

};

//////////////////////////77. Combinations //////////////////////////////////////////////////////

class Solution {
public:
    void f(vector<int>& nums, vector<vector<int>>& ans, vector<int> temp, int k, int i) {
        if (i == nums.size()) {
            if (k == 0) {
                ans.push_back(temp);
            }
            return;
        }
        temp.push_back(nums[i]);
        f(nums, ans, temp, k - 1, i + 1); // yes
        temp.pop_back(); // backtrack: remove the last element for the next iteration
        f(nums, ans, temp, k, i + 1); // no
      
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> nums;
        for (int i = 1; i <= n; i++) nums.push_back(i);
        vector<vector<int>> ans;
        // if(n==1) return {{nums[0]}};
        vector<int> temp;
        f(nums, ans, temp, k, 0);
        return ans;
    }
};

///////////////////////////////////216. Combination Sum III ///////////////////////////////////////

class Solution {
public:
void help(int i, int k, int sumTillNow, int n, vector<int> &subSet, vector<vector<int>> &ans) {
    if(sumTillNow > n) return ;
    if(k == 0) {
        if(sumTillNow == n)  {
            ans.push_back(subSet); 
            return;
        }else return;
    }
    if(i == 10) return ;
    subSet.push_back(i) ;
    help(i + 1, k - 1, sumTillNow+i, n, subSet, ans) ;
    subSet.pop_back() ;    
    help(i + 1, k, sumTillNow, n, subSet, ans); 
    
}
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> subSet ;
        
    vector<vector<int>> ans ;
        
    help(1, k, 0, n, subSet, ans) ;
        
    return ans ;
    }
};


////////////////////////////////////////////same code but another way to write /////////////////////////////////////////////////////
class Solution {
public:
void help(int i, int k, int sumTillNow, int n, vector<int> &subSet, vector<vector<int>> &ans) {
    if(sumTillNow > n) return ;
    if(k == 0) {
        if(sumTillNow == n)  {
            ans.push_back(subSet); 
            return;
        }else return;
    }
    if(i == 10) return ;
    subSet.push_back(i) ;
    sumTillNow +=i;
    k -=1;
    help(i + 1, k, sumTillNow, n, subSet, ans) ;
     sumTillNow -=i;
      k+=1;
    subSet.pop_back() ;    
    help(i + 1, k, sumTillNow, n, subSet, ans); 
    
}
    vector<vector<int>> combinationSum3(int k, int n) {
    vector<int> subSet ;
        
    vector<vector<int>> ans ;
        
    help(1, k, 0, n, subSet, ans) ;
        
    return ans ;
    }
};


///////////////////////377. Combination Sum IV/////////////////////////////////////////////////////


class Solution {
public:
    int f(vector<int>&nums,int target ,int sum,vector<int>&dp){
        if(sum>target) return 0;
        if(sum==target) return 1;
        if(dp[sum] !=-1) return dp[sum];
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            ans += f(nums,target,sum+nums[i],dp);
        }
        return dp[sum] = ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
       vector<int>dp(1001,-1);
       return f(nums,target,0,dp);
    }
};

//////////////////////////////////////// minus use karke bhi karna hai//////////////////////////////


















//////////////////////////1823. Find the Winner of the Circular Game/////////////////////////////
////////////////////////////Letter Combinations of a Phone Number////////////////////////////////
/////////////////////////////////Partition to K equal sum subsets////////////////////////
////////////////////////////////Maximum Length of a Concatenated String with Unique Characters//////////////////////
//////////////////////////////Flood Fill Algorithm////////////////////////////////////////////////////////////////
///////////////////////////////79. Word Search////////////////////////////////////////////////////////////////////
///////////////////////////////// N Queens///////////////////////////////////////////////////////////////////////

// House Robber: https://leetcode.com/problems/house-robber/ [Can be further optimized with DP, if TLE occurs]
// House Robber II: https://leetcode.com/problems/house-robber-ii/ [Similar problem, can be further optimized with DP]
// Return Subset Sum to K: https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118522/offering/1380917
// [Classic Recursive problem based on what we learnt till lecture10]// Generate Parenthesis: 
// CodeStudio: https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118522/offering/1380930
// LeetCode: https://leetcode.com/problems/generate-parentheses/description/
// Subsequences of a string: https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118522/offering/1380932 [Exactly same as generation of subsets of a given array]
// Decode Ways: https://leetcode.com/problems/decode-ways/ [Similar to solving Climbing Stairs. If TLE occurs, can be further optimized by DP]

// Palindrome Partition https://bit.ly/3akIDba 
// Sudoku Solver https://bit.ly/3zdefcU [Refer N queen lecture 21]
// Restore IP Addresses https://bit.ly/3GGDTIN [Refer Letter combination Problem lecture 15]
// Climbing Stair https://bit.ly/3MfooIV [It will be a cake walk, and don't worry if it gives TLE ]
// Symmetric Tree https://www.codingninjas.com/codestudio/problems/tree-symmetricity_630426  [If you have the knowledge of tree]



//////1: Print “Coder Army” 10 times using recursion  
//2: Print all odd number from n to 1 using recursion
//3: Print all numbers from 1 to n using recursion. 
// 1: Print all odd numbers from 1 to n using recursion.
// 2: Print all numbers from 10 to n using recursion, where n will be greater than 10.
// 3: Write a Table program using recursion. Take input number n, and print its table. 
// 1: Sum of cubes of N natural numbers using Recursion.
// 2: Power of 4
// 3: Given a Number N, check whether it is prime or not using Recursion.

// 4:Count number of hops
// 5: Fibonacci Series up to Nth term


// 1: Find the Maximum element in a given array of size N.
// 2: Find the Product of all elements in a given array of size N.
// 3: Find the Number of even elements in a given array of size N.


// 5: Given a String, count the number of consonants in it.

// 1: Given an array in non-increasing order, an element is given X, find if that element is present in the array or not. print 1 if its present else print 0.

// 2: Write a recursive function to reverse the elements of an array.

// 3: Write a recursive function to rotate elements in an array to the right by 1 position.

// 1: Sort an array in non-increasing order using Merge Sort.
// 2: Count Inversions


// 1: Use a quick sort algorithm to sort elements in descending order.

// 2: What is a stable algorithm? Find whether Bubble sort, Selection Sort, Insertion Sort, Merge Sort and Quicksort are stable algorithms.

// 3: What is an in-place algorithm? Find whether Bubble sort, Selection Sort, Insertion Sort, Merge Sort and Quicksort are in-place algorithms.


// 1:Subsets:
// 2:Generate Parentheses:
// 3: Given an array of size n, print all the sums possible from its subsequence.


// 1: Subset Sums
// 2: Given an array of size N, Print subset sum and corresponding to it, print the given subset also.
// Ex: arr[1,2]
// output:
// Sum Subset
// 1        1
// 2        2
// 3       1 2

// 3: Perfect sum



// 1: ​​Subset with sum divisible by m
// 2: Number of subsequences in a string divisible by n

// Your Code will Give TLE for this problem, it’s totally ok, We will resolve those issue when we learn about Dynamic Programming


// 1:Permutations of array
// 2: Permutations of a given string
// 3: Permutations II

// 3: Combination 2
// 4:Elimination game



//********************************recursion on the Linked List***************************////////////////////////////////
