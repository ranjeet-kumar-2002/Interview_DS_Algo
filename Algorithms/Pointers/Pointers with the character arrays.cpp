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

**************************************************************************
#include<iostream>
using namespace std;
void incre(int *p){
     *p = *p+1;
}
int main(){
    int num = 10;
    int temp = num;
    incre(&num);
    cout<<num;
    return 0;
}

************************************************************************************
#include<iostream>
using namespace std;
void fun(int *p1,int *p2){
     int temp = *p1;
     *p1 = *p2;
     *p2 = temp;
}
int main(){
    int num1 = 10;
    int num2 = 11;
    fun(&num1,&num2);
    cout<<num1<<" "<< num2<<endl;
}


***************************************************************************************
#include<iostream>
using namespace std;
void fun(int &p1,int &p2){
     int temp = p1;
     p1 = p2;
     p2 = temp;
}
int main(){
    int num1 = 10;
    int num2 = 11;
    fun(num1,num2);
    cout<<num1<<" "<< num2<<endl;
}
