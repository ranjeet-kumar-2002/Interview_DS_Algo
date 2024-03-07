

#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front,rear,size;
    public:
    Queue(int n){
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool IsEmpty(){
        return front == -1;
    }
    bool IsFull(){
        return rear == size-1;
    }

    void push(int value){
        if(IsEmpty()){  //IseEmpty
            front = rear = 0;
            arr[0] = value;
        }
       else if (IsFull()){  //IsFull
        cout<<"Queue Overflow";
        return;
       }else {
         rear = rear+1;
         arr[rear] =value;
       }
    }
    
    void pop(){
        if(IsEmpty()){
            cout<<"Queue Underflow";
            return;
        }else{
            if(front==rear){
                front = rear =-1;
            }else {
                front = front+1;
            }
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty";
            return -1;
        }else {
             return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.IsEmpty()<<endl;
    cout<<q.start()<<endl;
}

***************************************************************************

#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front,rear,size;
    public:
    Queue(int n){
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool IsEmpty(){
        return front == -1;
    }
    bool IsFull(){
        return rear == size-1;
    }

    void push(int value){
        if(IsEmpty()){  //IseEmpty
            front = rear = 0;
            arr[0] = value;
        }
       else if (IsFull()){  //IsFull
        cout<<"Queue Overflow";
        return;
       }else {
         rear = rear+1;
         arr[rear] =value;
       }
    }
    
    void pop(){
        if(IsEmpty()){
            cout<<"Queue Underflow";
            return;
        }else{
            if(front==rear){
                front = rear =-1;
            }else {
                front = front+1;
            }
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty";
            return -1;
        }else {
             return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.IsEmpty()<<endl;
    cout<<q.start()<<endl;
}

**************************************************************************8
/// circular queue

#include<bits/stdc++.h>
using namespace std;
class Queue{
    int *arr;
    int front,rear,size;
    public:
    Queue(int n){
        arr = new int[n];
        size = n;
        front = rear = -1;
    }
    bool IsEmpty(){
        return front == -1;
    }
    bool IsFull(){
        return (rear+1)%size == front;
    }

    void push(int value){
        if(IsEmpty()){  //IseEmpty
            front = rear = 0;
            arr[0] = value;
        }
       else if (IsFull()){  //IsFull
        cout<<"Queue Overflow";
        return;
       }else {
         rear = (rear+1)%size;
         arr[rear] =value;
       }
    }
    
    void pop(){
        if(IsEmpty()){
            cout<<"Queue Underflow";
            return;
        }else{
            if(front==rear){
                front = rear =-1;
            }else {
                front = (front+1)%size;
            }
        }
    }
    int start(){
        if(IsEmpty()){
            cout<<"Queue is empty";
            return -1;
        }else {
             return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.IsEmpty()<<endl;
    cout<<q.start()<<endl;
}


************************************************************************
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

class Queue{
    Node* front;
    Node* rear;
    public:
    Queue(){
        front = rear = NULL;
    }

    bool IsEmpty(){
        return front==NULL;
    }
    void push(int x){
        if(IsEmpty()){
           front = rear = new Node(x);
           if(rear->next==NULL){
            cout<<"Queue is overflow"<<endl;
            return;
           }
           return;
        }else{
            cout<<"push "<<x<<endl;
            rear->next = new Node(x);
            rear = rear->next;
        }
    }

    void pop(){
        if(IsEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }else{
            cout<<"popped"<<front->data<<endl;
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

 int start(){
     if(IsEmpty()){
        cout<<"Queue is empty"<<endl;
        return -1;
     }else{
        return front->data;
     }
 }

};
int main(){
    Queue q;
    q.push(5);
    q.push(51);
    q.push(115);
    q.push(58);
    q.push(60);
    cout<<q.IsEmpty()<<endl;
}

