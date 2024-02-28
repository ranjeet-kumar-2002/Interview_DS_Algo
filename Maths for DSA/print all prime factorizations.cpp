// print all prime factorizations
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 24;
    bool flag = true;
    vector<int>ans;
    for(int i =2;i*i<=n;i++){
        while(n%i==0){
           ans.push_back(i);
           n = n/i;
        }
    }
   if(n>1) ans.push_back(n);
   for(int i =0;i<ans.size();i++){
       cout<<ans[i]<<" ";
   }
}
