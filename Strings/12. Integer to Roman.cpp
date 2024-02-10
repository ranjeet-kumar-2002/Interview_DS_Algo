class Solution {
public:
    vector<int> val {1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string> sym {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string intToRoman(int num) {
      string ans = "";
      for(int i =0;i<val.size();i++){ // i<13
     
        int times = num/val[i];
        while(times--){
            ans = ans+sym[i];
        }
        num = num%val[i];

      }
      return ans;

    }
};
