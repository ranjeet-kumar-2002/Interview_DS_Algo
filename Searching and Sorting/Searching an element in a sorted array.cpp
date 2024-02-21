class Solution{
    public:
     int searchInSorted(int arr[], int N, int K) { 
     int i = 0;
     int j = N-1;
     while(i<=j){
         int mid = i+(j-i)/2;
         if(arr[mid]==K) return true;
         else if(arr[mid]>K) j = mid-1;
         else i=mid+1;
     }
     return -1;
    }
};

Searching an element in a sorted array
