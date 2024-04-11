#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
#include<queue>
#include<unordered_set>
#include<unordered_map>
#include<stack>
#include<string>
using namespace std;
void insertionSort(vector<int>&arr){
     for(int i =1;i<arr.size();i++){
          for(int j =i;j>0;j--){
               if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
               }else {
                    break;
               }
          }
     }
}
int main(){
     int n;cin>>n;
     vector<int>arr(n);
     for(int i =0;i<n;i++){
          cin>>arr[i];
     }
     insertionSort(arr);
     for(int i =0;i<n;i++) cout<<arr[i]<<" ";
     return 0;
}

************Time Complexity of Insertion Sort*******************
  
Best case: O(n), If the list is already sorted, where n is the number of elements in the list.
Average case: O(n2), If the list is randomly ordered
Worst case: O(n2), If the list is in reverse order
****************Space Complexity of Insertion Sort***************
  
Auxiliary Space: O(1), Insertion sort requires O(1) additional space, making it a space-efficient sorting algorithm.

*********************Advantages of Insertion Sort:*****************
  
Simple and easy to implement.
Stable sorting algorithm.
Efficient for small lists and nearly sorted lists.
Space-efficient.
***************Disadvantages of Insertion Sort:*********************
  
Inefficient for large lists.
Not as efficient as other sorting algorithms (e.g., merge sort, quick sort) for most cases.
  
****************pplications of Insertion Sort:***********************
Insertion sort is commonly used in situations where: The list is small or nearly sorted.
Simplicity and stability are important.

  
