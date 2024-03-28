#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int HeightofHeap(vector<int>&arr,int N){
     return log2(N);
}
int main(){
     int n ; cin>>n;
     vector<int>arr(n);
     for(int i =0;i<n;i++){
          cin>>arr[i];
     }
     cout<<HeightofHeap(arr,n);
     return 0;
}

// Input: N = 6
// arr = {1, 3, 6, 5, 9, 8}
// Output: 2
// Explaination: The tree is like the following
//           (1)
//       /   \
//     (3)    (6)
//     / \     /
//   (5) (9) (8)

***************************************************************************
// If x > 1: It returns the positive logarithmic value of x.
// If x is equals to 1: It returns 0.
// If 0 < x < 1: It returns the negative logarithmic value of x.
// If x is equals to 0: It returns the negative infinity(-∞).
// If x < 0: It returns NaN(Not a Number).

//Height of Heap

class Solution{
public:
    int heapHeight(int N, int arr[]){
      return log2(N);
    }
};

// ***************************************
class Solution{
public:
    int heapHeight(int N, int arr[]){
       if(N==1) return 1;
       int count = 0;
       while(N!=1){
           count++;
           N = N/2;
       }
       return count;
    }
};


