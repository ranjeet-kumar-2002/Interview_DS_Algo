#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>

using namespace std;
int findsum(int arr[],int n){
      int mini = INT_MAX;
      int maxi = INT_MIN;
      for(int i = 0;i<n;i++){
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]);
      }
      return mini+maxi;
}
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
         cin>>arr[i];
    }
    cout<<findsum(arr,n);
    return 0;
}

***************************************************************************
class Solution
{
  public:
    int findSum(int A[], int N){
      int mini = INT_MAX;
      int maxi = INT_MIN;
      for(int i = 0;i<N;i++){
            mini = min(mini,A[i]);
            maxi = max(maxi,A[i]);
      }
      return mini+maxi;
    }
};

N = 5
A[] = {-2, 1, -4, 5, 3}
