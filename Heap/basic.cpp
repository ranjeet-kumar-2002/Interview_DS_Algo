***************************creating the maxheap***********************************************
#include<bits/stdc++.h>
using namespace std;
class  Maxheap{
    int size; // total element in heap
    int total_size; // total size of array
    int *arr;
    public:
     Maxheap(int n){
          arr = new int[n];
          size = 0;
          total_size = n;
     }
     // insert into the heap
     void insert(int value){
          if(size==total_size){ // check if the size if available
               cout<<"heap is overflow"<<endl;
               return;
          }
          arr[size] = value;
          int indx = size;
          size++;
          // compare it with his parent
          while(indx>0 && arr[indx]>arr[(indx-1)/2]){
               swap(arr[indx],arr[(indx-1)/2]);
               indx = (indx-1)/2;
          }
          cout<<arr[indx]<<" inserted intot the heap\n"<<endl;
     }
     void print(){
         for(int i =0;i<size;i++){
              cout<<arr[i]<<endl;
         }
     }
    
};
int main(){
     Maxheap h(6);
     h.insert(20);
     h.insert(2);
     h.insert(29);
     h.insert(89);
     h.insert(27);
     h.print();
}
**************************************deletion in the heap***********************************
#include<bits/stdc++.h>
using namespace std;
class  Maxheap{
    int size; // total element in heap
    int total_size; // total size of array
    int *arr;
    public:
     Maxheap(int n){
          arr = new int[n];
          size = 0;
          total_size = n;
     }
     // insert into the heap
     void insert(int value){
          if(size==total_size){ // check if the size if available
               cout<<"heap is overflow"<<endl;
               return;
          }
          arr[size] = value;
          int indx = size;
          size++;
          // compare it with his parent
          while(indx>0 && arr[indx]>arr[(indx-1)/2]){
               swap(arr[indx],arr[(indx-1)/2]);
               indx = (indx-1)/2;
          }
          cout<<arr[indx]<<" inserted into the heap\n"<<endl;
     }
     void print(){
         for(int i =0;i<size;i++){
              cout<<arr[i]<<endl;
         }
     }
     void delete_item(){
          if(size==0) {
               cout<<"heap is underflow"<<endl;
               return;
          }
          arr[0] = arr[size-1];
          size--;
          if(size==0) return;
          heapify(0);
     }
     
     void heapify(int indx){
          int largest = indx;
          int left = 2*indx+1;
          int right = 2*indx+2;
          if(left<size && arr[left]>arr[largest]){
               largest = left;
          }
          if(right<size && arr[right]>arr[largest]){
               largest = right;
          }
          if(largest !=indx){
               heapify(largest);
          }
          
     }
    
};
int main(){
     Maxheap h(6);
     h.insert(20);
     h.insert(2);
     h.insert(29);
     h.insert(89);
     h.insert(27);
     h.print();
     h.delete_item();
     h.print();
}

