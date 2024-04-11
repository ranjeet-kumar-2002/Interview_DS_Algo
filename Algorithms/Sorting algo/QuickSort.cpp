#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int partioation(vector<int>&arr,int start,int end){
     int pos = start;
     for(int i =start;i<=end;i++){
          if(arr[i]<=arr[end]){
               swap(arr[i],arr[pos]);
               pos++;
          }
     }
     return pos-1;
}
void quicksort(vector<int>&arr,int start,int end){
     if(start>=end) return;
     int pivot = partioation(arr,start,end);
     quicksort(arr,start,pivot-1);
     quicksort(arr,pivot,end);
}

int main(){
     int n;cin>>n;
     vector<int>arr(n);
     for(int i =0;i<n;i++) cin>>arr[i];
     quicksort(arr,0,n-1);
     for(int i =0;i<n;i++) cout<<arr[i]<<" ";
     return 0;
}

*****************Advantages of Quick Sort:****************************************
It is a divide-and-conquer algorithm that makes it easier to solve problems.
It is efficient on large data sets.
It has a low overhead, as it only requires a small amount of memory to function.
**************************Disadvantages of Quick Sort:*****************************
It has a worst-case time complexity of O(N2), which occurs when the pivot is chosen poorly.
It is not a good choice for small data sets.
It is not a stable sort, meaning that if two elements have the same key,
their relative order will not be preserved in the sorted output in case of quick sort, because here we are 
swapping elements according to the pivot’s position (without considering their original positions).
