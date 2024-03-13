class Solution {
public:
    int pivotInteger(int n) {
      int x = sqrt(n*(n+1)/2);
      if(x*x==n*(n+1)/2) return x;
      return -1;
    }
};
********************************************************************************

class Solution {
public:
    int pivotInteger(int n) {
     int leftsum = 0;
     int rightsum = 0;
     int i =1;
     int j =n;
     while(i<=j){
         if(leftsum==rightsum){
            if(i==j) return i;
            else{
                leftsum +=i;
                rightsum+=j;
                i++;j--;
            }
         }else if(leftsum<rightsum){
             while(leftsum<rightsum){
                 leftsum +=i;
                 i++;
             }
         }
         else if(leftsum>rightsum){
            rightsum+=j;
            j--;
         }
     }
     return -1;
    }
};
*****************************************************************************


class Solution {
public:
    int pivotInteger(int n) {
     for(int pivet = 1;pivet<=n;pivet++){
         int leftsum = 0;
         int rightsum = 0;
         for(int i = 1;i<=pivet;i++) leftsum +=i;
         for(int j = pivet;j<=n;j++) rightsum +=j;
         if(rightsum==leftsum) return pivet;
     }
     return -1;
    }
};
