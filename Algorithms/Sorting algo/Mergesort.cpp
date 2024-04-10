******************** pros (nlogn)********************
// for largesize array very effiecinet 
// for linked list merging
// mergesort support external sorting
// merge sort is stable

******************** cons********************
// using extra space (not inplace )
// for small size it is slower (n<15)
  // merges sort is recursive so stack memory also using 
  
#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int start,int mid,int end){
     vector<int>temp(end-start+1);
     int left = start; int right = mid+1; int idx = 0;
     while(left<=mid && right<=end){
          if(arr[left]<=arr[right]){
            temp[idx] = arr[left];
            left++;idx++;
          }else {
             temp[idx]=arr[right];
             idx++;right++;
          }
     }
    while(left<=mid){
         temp[idx] = arr[left];
         idx++;left++;
    }    

     while(right<=end){
         temp[idx] = arr[right];
         idx++;right++;
    }
    idx = 0;
    while(start<=end){
         arr[start] = temp[idx];
         start++;idx++;
    }     

}
void mergesort(vector<int>&arr,int l,int r){
    if(l==r) return;
    int mid = l+(r-l)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r); 

}
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++) cin>>arr[i];
    mergesort(arr,0,n-1);
    for(int i =0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    return 0;
}
