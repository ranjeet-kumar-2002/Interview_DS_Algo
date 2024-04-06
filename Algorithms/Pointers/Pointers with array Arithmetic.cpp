
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5] {1,2,3,4,5};
    int *ptr = arr;
    // print the address first element or oth indx 
    cout<<arr<<endl;//0x7ffe1e63e7f0
    cout<<arr+0<<endl;//0x7ffe1e63e7f0
    cout<<&arr[0]<<endl;//0x7ffe1e63e7f0
    cout<<ptr<<endl; //0x7ffe1e63e7f0
    
    cout<<endl;
     // print the address first element or oth indx 
    cout<<arr+1<<endl;//0x7ffecdf336e4
    cout<<&arr[1]<<endl;//0x7ffecdf336e4
    
    // print the value of o index;
    cout<<*arr<<endl;//0x7ffe1e63e7f0
    cout<<*(arr+0)<<endl;//0x7ffe1e63e7f0
    cout<<arr[0]<<endl;//0x7ffe1e63e7f0
    cout<<*ptr<<endl; //0x7ffe1e63e7f0
    
    // print all the addresses
    for(int i =0;i<5;i++) cout<<arr+i<<endl;
    // print the value of the given arr
    for(int i =0;i<5;i++) cout<<*(arr+i)<<endl;
}
