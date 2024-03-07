
#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    int n = q.size();
    while(n--){
        cout<<q.front()<<" "; q.pop();
        q.push(q.front());
    }
    cout<<endl;
    cout<<q.size();
}
