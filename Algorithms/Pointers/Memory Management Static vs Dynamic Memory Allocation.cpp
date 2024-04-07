#include<iostream>
using namespace std;
int main(){
     // variable keliye heap memory allocate karo
     int *ptr = new int; // here  new int is giving the address of 
     cout<<ptr<<endl;
     *ptr = 5; // value assign
     cout<<*ptr<<endl;
     float *ptr2 = new float;// here new float is giving the address of 
     *ptr2 = 3.5;
     cout<<*ptr2<<endl;
     int n;
     cout<<"Enter the size of array"<<endl;
     cin>>n;
     int *p = new int[n];
     
     // assign the values into the array
     for(int i =0;i<n;i++){
          p[i]=i+1;
     }
     //print the array
     for(int i =0;i<n;i++) cout<<p[i]<<endl;
     
     // delete keyword ka use karna
     delete ptr;    // deleting the memeory from heap
     delete ptr2;  // deleting the memeory from heap
     delete p;     // deleting the memeory from heap
     return 0;
}
