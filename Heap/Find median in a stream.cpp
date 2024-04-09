class Solution{
    public:
     priority_queue<int>LeftMaxheap;
     priority_queue<int,vector<int>,greater<int>>RightMinheap;
    void insertHeap(int &x){
        if(LeftMaxheap.size()==0){
            LeftMaxheap.push(x);
            return;
        }
        if(x>LeftMaxheap.top()) RightMinheap.push(x);
        else LeftMaxheap.push(x);
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps(){
        if(RightMinheap.size()>LeftMaxheap.size()){
             LeftMaxheap.push(RightMinheap.top());
             RightMinheap.pop();
        }else{
             
             if(RightMinheap.size()+1<LeftMaxheap.size()){ 
                  RightMinheap.push(LeftMaxheap.top());
                  LeftMaxheap.pop();
        }
     }
        
  }
    
    //Function to return Median.
    double getMedian(){
        if(LeftMaxheap.size()>RightMinheap.size()){
             return LeftMaxheap.top();
        }else{
             double ans = LeftMaxheap.top()+RightMinheap.top();
             ans /=2;
             return ans;
        }
    }
};

**************************************************************************************
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class Solution {
public:
    priority_queue<int> LeftMaxheap;
    priority_queue<int, vector<int>, greater<int>> RightMinheap;
    void insertHeap(int &x) {
        if (LeftMaxheap.empty()) {
            LeftMaxheap.push(x);
            return;
        }
        if (x > LeftMaxheap.top())
            RightMinheap.push(x);
        else
            LeftMaxheap.push(x);
        balanceHeaps();
    }

    // Function to balance heaps.
    void balanceHeaps() {
        if (RightMinheap.size() > LeftMaxheap.size()) {
            LeftMaxheap.push(RightMinheap.top());
            RightMinheap.pop();
        } else {
            if (LeftMaxheap.size() > RightMinheap.size() + 1) {
                RightMinheap.push(LeftMaxheap.top());
                LeftMaxheap.pop();
            }
        }
    }

    // Function to return Median.
    double getMedian() {
        if (LeftMaxheap.size() > RightMinheap.size()) {
            return LeftMaxheap.top();
        } else {
            double ans = LeftMaxheap.top() + RightMinheap.top();
            ans /= 2;
            return ans;
        }
    }
};

int main() {
    Solution obj;
    int N;cin>>N;
    int X[N];
    for(int i =0;i<N;i++) cin>>X[i];
    for (int i = 0; i < N; ++i) {
        obj.insertHeap(X[i]);
        cout << obj.getMedian() << endl;
    }
    return 0;
}


// input {7 11 4 9 15 2 1 18}
// output {7 9 7 8 9 8 7 8}
