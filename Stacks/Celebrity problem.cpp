#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
    int celebrity(vector<vector<int> >& M, int n) {
          stack<int>st;
          for(int i = n-1;i>=0;i--) st.push(i);
          while(st.size()>1){
               int top1 = st.top();st.pop();
               int top2 = st.top();st.pop();
               if(M[top1][top2]== 0 && M[top2][top1] == 1) st.push(top1);
               if(M[top2][top1]== 0 && M[top1][top2] == 1) st.push(top2); // else if
          }
          
          if(st.size()==0) return -1;
          int top = st.top();st.pop();
          int rowsum = 0;
          for(int i =0;i<n;i++){
               rowsum +=M[top][i];
          }
          
            int colsum = 0;
          for(int i =0;i<n;i++){
               colsum +=M[i][top];
          }
         
          if(rowsum==0 && colsum==n-1) return top;
          return -1;
    }
    int main(){
         int n;cin>>n;
         vector<vector<int>>mat(n,vector<int>(n));
         for(int i =0;i<n;i++){
              for(int j =0;j<n;j++){
                   cin>>mat[i][j];
              }
         }
         cout<<celebrity(mat,n);
         return 0;
    }
