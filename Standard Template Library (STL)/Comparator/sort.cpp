
#include<bits/stdc++.h>
using namespace std;
    bool mycomp(int a,int b){
            if(a>b) return true; //(a>b) descending order
            return false;
    }
    void print(vector<int>&vec){
         for(int i = 0;i<vec.size();i++){
            cout<<vec[i]<<endl;
        }
    }
int main(){
        vector<int>vec = {3,2,1,6};
        sort(vec.begin(),vec.end(),mycomp);
        print(vec);
}
****************************************************************8
#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>>vec){
    for(pair<int,int>&p:vec){
        cout<<"{"<<p.first<<","<<p.second<<"}";
    }
    cout<<endl;  //{2,3}{2,4}{3,1}
}
int main(){
        vector<pair<int,int>>vec = {{2,3},{2,4},{3,1}};
        sort(vec.begin(),vec.end()); 
          // by default it will sort asending order if on the basis of first element if first lement is same then it will sort on the basis of second element
        print(vec);
}

// //****************************************************
#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>>vec){
    for(pair<int,int>&p:vec){
        cout<<"{"<<p.first<<","<<p.second<<"}";
    }
    cout<<endl; 
}
bool mycomp(pair<int,int>p1,pair<int,int>p2){
    // decreasing order if first is same then on the basis the second element it will sort
     if(p1.first==p2.first) {
         if(p1.second>p2.second) return true;
         return false;
     }
     if(p1.first>p2.first) return true;
     return false;
}
int main(){
        vector<pair<int,int>>vec = {{2,3},{2,4},{3,1}};
        sort(vec.begin(),vec.end()); 
          // by default it will sort asending order if on the basis of first element if first lement is same then it will sort on the basis of second element
          
        sort(vec.begin(),vec.end(),mycomp); 
        print(vec);
}



// //****************************************************
#include<bits/stdc++.h>
using namespace std;
void print(vector<pair<int,int>>vec){
    for(pair<int,int>&p:vec){
        cout<<"{"<<p.first<<","<<p.second<<"}";
    }
    cout<<endl; 
}

bool mycomp(pair<int,int>p1,pair<int,int>p2){
    //  decreasing order if first is same then on the basis the second element it will sort
     if(p1.first==p2.first) return p1.second>p2.second;
     return p1.first>p2.first;
}
int main(){
        vector<pair<int,int>>vec = {{2,3},{2,4},{3,1}};
        sort(vec.begin(),vec.end()); 
          // by default it will sort asending order if on the basis of first element if first lement is same then it will sort on the basis of second element
          
        sort(vec.begin(),vec.end(),mycomp); 
        print(vec);
}


// //*******************************function objects(functors)***********
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&vec){
    for(int i =0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}
  class mycomp{
        public:
        bool operator () (int a,int b){
            return a<b;
        }
    };
int main(){
    vector<int>vec = {3,2,1,6,11,0};
    sort(begin(vec),end(vec),mycomp());
    print(vec);
}


//*******************************lambda Expressions***********
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&vec){
    for(int i =0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}
int main(){
    vector<int>vec = {3,2,1,6,11,0};
    auto mycomp = [&](int a,int b){
        return a>b;
    };// <-- semicolon added here
    sort(vec.begin(),vec.end(),mycomp);
    print(vec);
}

//*******************************lambda Expressions***********
// [] -> capture clause
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>&vec){
    for(int i =0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
}
int main(){
    vector<int>vec = {3,2,1,6,11,0};
    sort(vec.begin(),vec.end(),[&](int a,int b){
        return a>b;
    });
    print(vec);
}
*****************************************************************************
#include<iostream>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
     if(p1.second<p2.second) return true;
     if(p1.second>p2.second) return false;
     if(p1.second==p2.second) {
          if(p1.first>p2.first) return true;
     }
     
}
int main(){
    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4);
    sort(a,a+n,greater<int>);
    pair<int,int>a[] ={{1,2},{2,1},{4,1}};
    // sort it acc to second element
    // if second element is same , then sort 
    // it acc to first element but in descending 
    sort(a,a+n,comp); // {4,1},{2,1},{1,2}
    int num = 7;
    int cnt = builtin_popcount(num);
    
    int num1 = 28734839842;
    int cnt = builtin_popcountll(num1);
    string s = "123";
    do {
        cout<<s<<endl;
    }while(next_purmutation(s.begin(),s.end()));
    
    int maxi = *max_element(a,a+n);
}

