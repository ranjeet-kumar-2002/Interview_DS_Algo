using sorting algo
using min heap
using the max heap
quich select

class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
         int n = sizeof(arr)/sizeof(arr[0]);
      // sort(arr, arr + n, greater<int>());// deacreasing order sort
      // sort(arr,arr+l+r+1); or 
      
        sort(arr,arr+r+1); //here n = r+1
        return arr[k-1];
         
    }
};

****************************************************************************
class Solution{
    public:
    int kthSmallest(int arr[], int l, int r, int k) {
        priority_queue<int>pq;
        for(int i =0;i<k;i++){
             pq.push(arr[i]);
        }
        int n = r+1;
        for(int i = k ;i<n;i++){
             if(pq.top()>arr[i]){
                  pq.pop();pq.push(arr[i]);
             }
        }
        return pq.top();
    }
};

