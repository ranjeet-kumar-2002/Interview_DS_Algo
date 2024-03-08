
#include<bits/stdc++.h>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int k =3;
    queue<int>q;
    for(int i = 0;i<k-1;i++){
        q.push(arr[i]);
    }
    for(int i = k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        cout<<endl;
        q.pop();
    }
}

1 2 3 
2 3 4 
3 4 5 
4 5 6 

#include<bits/stdc++.h>
using namespace std;
void display(queue<int>q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int n = arr.size();
    int k =3;
    queue<int>q;
    for(int i = 0;i<k;i++){
        q.push(arr[i]);
    }
    for(int i = k;i<=n;i++){
        display(q);
        cout<<endl;
        q.pop();
        q.push(arr[i]);
    }
}
