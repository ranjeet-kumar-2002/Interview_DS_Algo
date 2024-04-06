#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<<a<<endl;
    cout<<&a<<endl;//0x7ffd884f9a3c //hexadecimal form
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;
    cout<<sizeof(ptr); // 8 byte
}

#include<iostream>
using namespace std;
int main(){
    int a =10;
    int *ptr = &a;
    cout<<ptr<<endl; //0x7ffc1d3ccc14
    cout<<*ptr<<endl; // 10
    cout<<sizeof(ptr)<<endl; // 8 byte
    int b = 20;
    ptr = &b;
    cout<<ptr<<endl; //0x7ffc1d3ccc10
    cout<<*ptr<<endl;//20
    
}

