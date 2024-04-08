//Kth largest element in a stream

#include<iostream>
#include<vector>
#include<queue>
using namespace std;

    vector<int> kthLargest(int n,int k, int arr[]) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> answer(n,-1);
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            if(pq.size()>k)
                pq.pop();
            if(pq.size()==k)
                answer[i]=pq.top();
        }
        return answer;
    }
int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = kthLargest(n,k,arr);
    for(int i =0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}

// k = 4, n = 6
// arr[] = {1, 2, 3, 4, 5, 6}
// Output:
// -1 -1 -1 1 2 3
