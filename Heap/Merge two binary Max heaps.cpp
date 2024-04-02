#include<iostream>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<climits>
#include<vector>
using namespace std;
int main(){
     int n;int m;
     cin>>n; cin>>m;
     vector<int>a(n);
     vector<int>b(m);
     for(int i =0;i<n;i++) cin>>a[i];
     for(int i =0;i<m;i++) cin>>b[i];
     priority_queue<int>pq;
     for(int i =0;i<n;i++) pq.push(a[i]);
     for(int i =0;i<m;i++) pq.push(b[i]);
     vector<int>ans;
     while(!pq.empty()){
          cout<<pq.top()<<" ";pq.pop();
     }
     return 0;
}
***************************************************************************
#include<iostream>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<climits>
#include<vector>
#include<algorithm>
using namespace std;

void heapify(vector<int>& arr, int n, int indx) {
    int largest = indx;
    int lc = 2 * indx + 1;
    int rc = 2 * indx + 2;
    if (lc < n && arr[lc] > arr[largest]) 
        largest = lc;
    if (rc < n && arr[rc] > arr[largest]) 
        largest = rc;
    if (largest != indx) {
        swap(arr[largest], arr[indx]);
        heapify(arr, n, largest);
    }
}

void buildHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    for (int i = 0; i < m; i++) 
        cin >> b[i];
    vector<int> merge;
    for (int i = 0; i < n; i++) 
        merge.push_back(a[i]);
    for (int i = 0; i < m; i++) 
        merge.push_back(b[i]);
    buildHeap(merge);
    for (int i = 0; i < merge.size(); i++) 
        cout << merge[i] << " ";
    return 0;
}
********************************************************************************
// 4
// 3
// 10 5 6 2
// 12 7 9
// 12 10 9 2 5 7 6 

class Solution{
    public:
    void heapify(vector<int>& arr, int n, int indx) {
    int largest = indx;
    int lc = 2 * indx + 1;
    int rc = 2 * indx + 2;
    if (lc < n && arr[lc] > arr[largest]) 
        largest = lc;
    if (rc < n && arr[rc] > arr[largest]) 
        largest = rc;
    if (largest != indx) {
        swap(arr[largest], arr[indx]);
        heapify(arr, n, largest);
    }
}

void buildHeap(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}


    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
          vector<int>temp;
          for(int i = 0;i<n;i++) temp.push_back(a[i]);
          for(int i = 0;i<m;i++) temp.push_back(b[i]);
          buildHeap(temp);
          return temp;
    } 
};
*****************************************************************************************
//Merge two binary Max heaps
class Solution{
    public:
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
      priority_queue<int>pq;
      for(int i = 0;i<n;i++)pq.push(a[i]);
      for(int i = 0;i<m;i++)pq.push(b[i]);
      vector<int>ans;
      while(!pq.empty()){
           ans.push_back(pq.top());pq.pop();
      }
      return ans;
    }
};
