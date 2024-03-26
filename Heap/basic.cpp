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
