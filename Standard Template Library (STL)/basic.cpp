#include<bits/stdc++.h>
using namespace std;
int main(){
        pair<string,int>p;
        p = make_pair("rohit",30);
        p.first = "rohit";
        p.second = 20;
     cout<<p.first<<" "<<p.second<<endl;
}



#include<bits/stdc++.h>
using namespace std;
int main(){
     pair<string,pair<int,int>>p;
     p.first = "ranjeet";
     p.second.first = 40;
     p.second.second = 20;
    
    p=make_pair("Ranjeet",make_pair(20,24));
     cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}
