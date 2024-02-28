check if the given number is perime or not

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 11;
    bool flag = true;
    for(int i =2;i<n;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    cout<<flag<<endl;
}

