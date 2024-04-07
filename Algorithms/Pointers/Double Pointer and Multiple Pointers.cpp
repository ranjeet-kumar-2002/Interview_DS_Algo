
#include<iostream>
using namespace std;
int main(){
     int n = 10;
     int *p1 = &n;    // single pointer 
     int **p2 = &p1;  // double pointer 
     int ***p3 = &p2; // triple pointer
     cout<<p1<<endl;  //0x7ffe110245dc
     cout<<&p1<<endl; //0x7ffe110245d0
     cout<<p2<<endl;  //0x7ffe110245d0
     cout<<&p2<<endl; //0x7ffe110245c8
     cout<<&p3<<endl; //0x7ffe110245c0
     return 0;
}
