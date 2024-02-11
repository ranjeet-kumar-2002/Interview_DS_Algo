class Solution {
public:
    vector<int> factorial(int N){
      vector<int>ans(1,1);
      for(int n = N;n>=2;n--){
          int carry = 0;
          int size = ans.size();
          for(int i = 0;i<size;i++){
              int temp = ans[i]*n+carry;
              ans[i] = temp%10;
              carry = temp/10;
          }
          while(carry){
              ans.push_back(carry%10);
              carry = carry/10;
          }
      }
      reverse(ans.begin(),ans.end());
      return  ans;
    }
};


class Solution {
public:
    vector<int> factorial(int N){
      vector<int>ans(1,1);
      for(int n = 1;n<=N;n++){
          int carry = 0;
          int size = ans.size();
          for(int i = 0;i<size;i++){
              int temp = ans[i]*n+carry;
              ans[i] = temp%10;
              carry = temp/10;
          }
          while(carry){
              ans.push_back(carry%10);
              carry = carry/10;
          }
      }
      reverse(ans.begin(),ans.end());
      return  ans;
    }
};
