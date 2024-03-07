

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
