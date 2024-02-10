class Solution {
public:
    string addStrings(string num1, string num2) {
         int carry = 0;
         int i = num1.size()-1;
         int j = num2.size()-1;
         string ans = "";
         while(j>=0 && i>=0){
             int x1 = num1[i]-'0';
             int x2 = num2[j]-'0';
             int temp = x1+x2+carry;
             carry = temp/10;
             ans = ans+to_string(temp%10);
             i--; j--;
         }

          while(i>=0){
             int x1 = num1[i]-'0';
             int temp = x1+carry;
             carry = temp/10;
             ans = ans+to_string(temp%10);
             i--;
         }

          while(j>=0){
             int x2 = num2[j]-'0';
             int temp = x2+carry;
             carry = temp/10;
             ans = ans+to_string(temp%10);
             j--;
         }
         if (carry > 0) ans = ans + to_string(carry%10);
         reverse(ans.begin(),ans.end());
         return ans;
    }
};

****************************************************************************************
class Solution {
public:
    string addStrings(string num1, string num2) {
         int carry = 0;
         int i = num1.size()-1;
         int j = num2.size()-1;
         string ans = "";
         while(j>=0 || i>=0 || carry>0){
             int x1 = i>=0 ? num1[i]-'0':0;
             int x2 = j>=0 ? num2[j]-'0':0;
             int temp = x1+x2+carry;
             carry = temp/10;
             ans = ans+to_string(temp%10);
             i--; j--;
         }
         reverse(ans.begin(),ans.end());
         return ans;
    }
};
