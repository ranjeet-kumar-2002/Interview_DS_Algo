
#include<bits/stdc++.h>
using namespace std;
bool canattend( vector<vector<int>> &intervals){
    sort(intervals.begin(),intervals.end());
    for(int i =1;i<intervals.size();i++){
        if(intervals[i][0]<intervals[i-1][1]) return false;
    }
    return true;
}
int main(){
   // vector<vector<int>> intervals = {{0,30},{5,10},{15,20}};
    vector<vector<int>> intervals = {{7,10},{2,4}};
    cout<<canattend(intervals);
}
