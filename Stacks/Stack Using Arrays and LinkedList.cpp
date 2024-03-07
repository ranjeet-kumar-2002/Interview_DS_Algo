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

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
class Stack{
    Node* top;
    int size;
    public:
    Stack(){
        top= NULL;
        size = 0;
    }
    void push(int value){
        Node* temp = new Node(value);
        if(temp==NULL) {
            cout<<"stack is overflow"<<endl;
            return;
        }
        else{   
                temp->next = top;
                cout<<"pushed"<<value<<" "<<endl;
                top = temp;
                size++;
        }
    }
    
    void pop(){
        if(top==NULL){
            cout<<"stack underflow"<<endl;
        }else{
            
            Node* temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }
    int peek(){
        if(top==NULL) {
            cout<<"stack is empty"<<endl;
            return -1;
        } else return top->data;
    }
    bool isempty(){
        return top==NULL;
    }
    int issize(){
        return size;
    }
};
int main(){
    
    Stack s;
    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);
}


