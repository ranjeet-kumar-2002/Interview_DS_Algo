// same as the largest rectagle histogram problem
// we need to convert this matrix into bars 
// we need to find the NSL and NSR (indx) why because we want with 
// tips if we want to find next smaller from left then iterate from // right vice versa
// then we can calcutate the maximal area 
//85. Maximal Rectangle

#include<iostream>
#include<string>
#include<stack>
#include<cmath>
#include<climits>
#include<vector>
using namespace std;

     vector<int>nsl(vector<int>arr){  
        int n = arr.size();
        vector<int>leftsmal(n,-1);
        stack<int>st;
        for(int i = n-1;i>=0;i--){
             while(st.size()>0 && arr[st.top()]>arr[i]){
                 leftsmal[st.top()] = i;
                 st.pop();
             }
             st.push(i);
        }
       return leftsmal;
    }
    vector<int>nsr(vector<int>arr){
        int n = arr.size();
        vector<int>rightsmal(n,n);
        stack<int>st;
        for(int i =0;i<n;i++){
              while(st.size()>0 && arr[st.top()]>arr[i]){
                 rightsmal[st.top()] = i;
                 st.pop();
              }
              st.push(i);
        }
        return rightsmal;
    }

    int findArea(vector<int>&heights){ 
         vector<int>NSL = nsl(heights);
         vector<int>NSR= nsr(heights);
         int ans = INT_MIN;
         for(int i =0;i<heights.size();i++){
             ans = max(ans,(NSR[i]-NSL[i]-1)*heights[i]);
         }
         return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int>heights(n,0); 
        int ans = INT_MIN;
        for(int i =0;i<m;i++){
             for(int j = 0;j<n;j++){
                 int temp = matrix[i][j];
                 if(temp!='0') heights[j] = 1+heights[j];
                 else heights[j] = 0;
             }
             ans = max(ans,findArea(heights));
        }
        return ans;
    }

int main(){
     int m,n;
     cin>>m>>n;
     vector<vector<char>>mat(m,vector<char>(n));
     for(int i =0;i<m;i++){
         for(int j =0;j<n;j++){
             cin>>mat[i][j];
         }
     }
     cout<<maximalRectangle(mat);
}

"1" "0" "1" "0" "0" 
"1" "0" "1" "1" "1" 
"1" "1" "1" "1" "1"
"1" "0" "0" "1" "0"
6
