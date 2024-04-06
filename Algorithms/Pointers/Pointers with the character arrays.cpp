#include<iostream>
#include<string>
using namespace std;

int main(){
     char arr[6] = "12345"; // Need space for null terminator
     char *ptr = arr; // Change int* to char*
     cout<<static_cast<void*>(arr)<<endl;
     cout<<(void*)ptr<<endl;
     
     char name = 'a';
     char *ptr1 = &name;
     cout<<(void*)&name<<endl;
     cout<<(void*)ptr1<<endl;
}
