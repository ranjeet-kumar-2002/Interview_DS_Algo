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
