// convert 2D matrix into 1D array then sort
// using min heap
// using binary search
// using min with optimal insertion

//********imp problem******//

int kthSmallest(int mat[MAX][MAX], int n, int k){
  priority_queue<int,vector<int>,greater<int>>pq;
  for(int i =0;i<n;i++){
      for(int j =0;j<n;j++) {
            pq.push(mat[i][j]);
      }
  }
  k--;
  while(k--){
      pq.pop();
  }
  return pq.top();
}

****************************************************************
typedef pair<int,pair<int,int>>P;
int kthSmallest(int mat[MAX][MAX], int n, int k){
  priority_queue<P,vector<P>,greater<P>>pq;
  vector<pair<int,pair<int,int>>>p;
  for(int i=0;i<n;i++){
      pq.push(make_pair(mat[i][0],make_pair(i,0)));
  }
  int ans;
  while(k--){
        auto top = pq.top();pq.pop();
        ans = top.first;
        int i = top.second.first;
        int j = top.second.second;
        if(j+1<n) pq.push(make_pair(mat[i][j+1],make_pair(i,j+1)));
  }
  return ans;
}

*************************************************************************

typedef pair<int,pair<int,int>>P;
int kthSmallest(int mat[MAX][MAX], int n, int k){
   priority_queue<P,vector<P>,greater<P>>pq;
   vector<pair<int,pair<int,int>>>p;
   for(int i=0;i<n;i++){
      pq.push({mat[i][0],{i,0}});
   }
   int ans;
   while(k--){
        auto top = pq.top();pq.pop();
        ans = top.first;
        int i = top.second.first;
        int j = top.second.second;
        if(j+1<n) pq.push({mat[i][j+1],{i,j+1}});
   }
   return ans;
}


#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100;

int kthSmallest(int mat[MAX][MAX], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            pq.push(mat[i][j]);
        }
    }
    k--;
    while (k--) {
        pq.pop();
    }
    return pq.top();
}

int main() {
    int N, K;
    cout << "Enter the size of the matrix: ";
    cin >> N;
    int mat[MAX][MAX];
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> mat[i][j];
        }
    }

    cout << "Enter the value of K: ";
    cin >> K;

    cout << "The " << K << "th smallest element is: " << kthSmallest(mat, N, K) << endl;

    return 0;
}
*******************************************************************************

// Input:
// N = 4
// mat[][] =     {{16, 28, 60, 64},
//                   {22, 41, 63, 91},
//                   {27, 50, 87, 93},
//                   {36, 78, 87, 94 }}
// K = 3
// Output: 27
// Explanation: 27 is the 3rd smallest element.
