
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
void selectionSort(int arr[],int n){
     for(int i = 0;i<n-1;i++){
          int smallestIndx = i;
          int smallest = arr[i];
          for(int j = i+1;j<n;j++){
              if(smallest>arr[j]){
                     smallestIndx = j;
                     smallest = arr[j];
              }
          }
          swap(arr[i],arr[smallestIndx]);
     }
}
int main(){
     int n; cin>>n;
     int arr[n];
     for(int i =0;i<n;i++){
         cin>>arr[i];
     }
    selectionSort(arr,n);
     for(int i =0;i<n;i++){
         cout<<arr[i]<<" ";
     }
}
************************************************************************
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
void selectionSort(int arr[],int n){
     for(int i = 0;i<n-1;i++){
          int smallestIndx = i;
          int smallest = arr[i];
          bool flag = false; 
          for(int j = i+1;j<n;j++){
              if(smallest>arr[j]){
                     smallestIndx = j;
                     smallest = arr[j];
                     flag = true;
              }
          }
          if(flag) swap(arr[i],arr[smallestIndx]);
     }
}
int main(){
     int n; cin>>n;
     int arr[n];
     for(int i =0;i<n;i++){
         cin>>arr[i];
     }
    selectionSort(arr,n);
     for(int i =0;i<n;i++){
         cout<<arr[i]<<" ";
     }
}
************************************************************************************
#include<iostream>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>
using namespace std;
void selectionSort(int arr[],int n){
     for(int i = 0;i<n-1;i++){
          int smallestIndx = i;
          for(int j = i+1;j<n;j++){
              if(arr[smallestIndx]>arr[j]){
                     smallestIndx = j;
              }
          }
          swap(arr[i],arr[smallestIndx]);
     }
}
int main(){
     int n; cin>>n;
     int arr[n];
     for(int i =0;i<n;i++){
         cin>>arr[i];
     }
    selectionSort(arr,n);
     for(int i =0;i<n;i++){
         cout<<arr[i]<<" ";
     }
}


// 5
// 9 7 3 1 6
