#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
    int size;
    int top;
    int *arr;
    
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }
    
    void push(int value){
        if(top == size - 1){
            cout << "stack overflow" << endl;
        } else {
            top++;
            arr[top] = value;
        }
    }
    
    void pop(){
        if(top == -1){
            cout << "stack underflow" << endl;
            return;
        } else {
            top--;
        }
    }
    
    int peek(){
        if(top == -1){
            cout << "stack is empty" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }
    
    bool isEmpty(){
        return top == -1;
    }
    
    int getSize(){
        return top + 1;
    }
};

int main(){
    Stack s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.peek() << endl;
}
********************************************************************

